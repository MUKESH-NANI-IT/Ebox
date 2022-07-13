#include <stddef.h>
#include <stdlib.h>
#ifdef DEBUG
#define PRINT printf
#define ASSERT assert
#else
#define PRINT
#define ASSErt
#endif

typedef struct heap
{
    int size;
     int **buildings;
} Heap;

static inline int getLeft(const int *building)
{
    return building[0];
}

static inline int getRight(const int *building)
{
    return building[1];
}

static inline int getHeight(const int *building)
{
    return building[2];
}

// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//
// 0 -> 1, 2
// 1 -> 3, 4
// 2 -> 5, 6
// 3 -> 7, 8
// 4 -> 9

static inline int getParentIdx(int idx)
{
    return (idx - 1) / 2;
}

static inline int getFirstChildIdx(int idx)
{
    return (idx * 2) + 1;
}

static inline void heapSwap(Heap *h,  int a,  int b)
{
     int *temp = h->buildings[a];
    h->buildings[a] = h->buildings[b];
    h->buildings[b] = temp;
}

static void heapBalanceUp(Heap *h)
{
    int idx = h->size - 1;

    while (idx > 0)
    {
        const int pIdx = getParentIdx(idx);
        if (getHeight(h->buildings[pIdx]) < getHeight(h->buildings[idx]))
        {
            heapSwap(h, idx, pIdx);
            idx = pIdx;
        }
        else
        {
            break;
        }
    }
}

static void heapBalanceDown(Heap *h)
{
    int idx = 0;

    while (idx < h->size)
    {
        const int cIdx1 = getFirstChildIdx(idx);
        const int cIdx2 = cIdx1 + 1;
        int cIdx = -1;

        if (cIdx2 < h->size)
        {
            if (getHeight(h->buildings[cIdx1]) > getHeight(h->buildings[cIdx2]))
            {
                cIdx = cIdx1;
            }
            else
            {
                cIdx = cIdx2;
            }
        }
        else if (cIdx1 < h->size)
        {
            cIdx = cIdx1;
        }
        else
        {
            break;
        }

        if (getHeight(h->buildings[cIdx]) > getHeight(h->buildings[idx]))
        {
            heapSwap(h, idx, cIdx);
            idx = cIdx;
        }
        else
        {
            break;
        }
    }
}

static void heapPush(Heap *h,  int *building)
{
    h->buildings[h->size++] = building;
    heapBalanceUp(h);
}

static  int *heapPeak(Heap *h)
{
    if (h->size > 0)
    {
        return h->buildings[0];
    }
    else
    {
        return NULL;
    }
}

static void heapRemove(Heap *h)
{
    if (h->size > 0)
    {
        if (h->size > 1)
        {
            h->buildings[0] = h->buildings[h->size - 1];
        }
        h->size--;
        if (h->size > 1)
        {
            heapBalanceDown(h);
        }
    }
}

static inline void setRet(int **ret, int *rIdx, const int left, const int height)
{
    ret[*rIdx] = malloc(2 * sizeof(int));
    ret[*rIdx][0] = left;
    ret[*rIdx][1] = height;
    *rIdx += 1;
}

static inline int getLastHeight(int **ret, int rIdx)
{
    if (rIdx == 0)
    {
        return -1;
    }
    else
    {
        return ret[rIdx - 1][1];
    }
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **getSkyline(int **buildings, int buildingsSize, int *buildingsColSize, int *returnSize, int **returnColumnSizes)
{
    const int maxRetSize = 2 * buildingsSize;
    int **ret = malloc(maxRetSize * sizeof(int *));
    int numRet = 0;
    int curX = 0;

    Heap h = {0, NULL};
    h.buildings = malloc(buildingsSize * sizeof(int *));

    heapPush(&h, buildings[0]);
    curX = getLeft(buildings[0]);

    for (int i = 1; i < buildingsSize; i++)
    {
         int *peak = heapPeak(&h);
         int *cur = buildings[i];

        while (curX < getLeft(cur))
        {
            if (getRight(peak) >= getLeft(cur))
            {
                if (getLastHeight(ret, numRet) != getHeight(peak))
                {
                    setRet(ret, &numRet, curX, getHeight(peak));
                }
                curX = getLeft(cur);
            }
            else
            {
                int *prevPeak = peak;

                do
                {
                    heapRemove(&h);
                    peak = heapPeak(&h);
                } while (peak != NULL && getRight(peak) <= getRight(prevPeak));

                if (getLastHeight(ret, numRet) != getHeight(prevPeak))
                {
                    setRet(ret, &numRet, curX, getHeight(prevPeak));
                }

                if (peak != NULL)
                {
                    if (getHeight(peak) != getHeight(prevPeak))
                    {
                        setRet(ret, &numRet, getRight(prevPeak), getHeight(peak));
                    }
                    curX = getRight(prevPeak);
                }
                else
                {
                    setRet(ret, &numRet, getRight(prevPeak), 0);
                    curX = getLeft(cur);
                }
            }
        }

        heapPush(&h, cur);
    }

    for (const int *peak = heapPeak(&h); peak != NULL; heapRemove(&h), peak = heapPeak(&h))
    {
        if (getRight(peak) > curX)
        {
            if (getLastHeight(ret, numRet) != getHeight(peak))
            {
                setRet(ret, &numRet, curX, getHeight(peak));
            }
            curX = getRight(peak);
        }
    }
    setRet(ret, &numRet, curX, 0);

    free(h.buildings);

    if (numRet != maxRetSize)
    {
        ret = realloc(ret, numRet * sizeof(int *));
    }
    *returnSize = numRet;
    *returnColumnSizes = malloc(numRet * sizeof(int));
    for (int i = 0; i < numRet; i++)
    {
        (*returnColumnSizes)[i] = 2;
    }

    return ret;
}
