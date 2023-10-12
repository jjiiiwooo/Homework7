#include <stdio.h>
#include <stdlib.h>
#define MAX  200

typedef struct HeapNode {
	int data;
}HeapNode;

typedef struct Heap {
	HeapNode heap[MAX];
	int capacity;
}Heap;

//노드 생성 
HeapNode* Heap_Create()
{
	return (Heap*)malloc(sizeof(Heap));
}

//노드 추가 
HeapNode Heap_Insert(Heap* h, HeapNode newNode)
{
	int i, count;
	i = ++(h->capacity);

	//삽입 노드의 데이터가 부모 노드의 데이터보다 크면
	while ((i != 1) && (newNode.data > h->heap[i / 2].data))
	{
		
		h->heap[i] = h->heap[i / 2];
		i /= 2;
		count++;
	}

	h->heap[MAX] = newNode;

}

//노드 삭제 
HeapNode Heap_delete(Heap* h)
{
	int Parent, child;
	int count;
	HeapNode item, temp;

	//루트 노드 
	item = h->heap[1];
	temp = h->heap[(h->capacity)--];
	Parent = 1;
	child = 2;

	while (child < h->capacity)
	{
		//현재 노드의 오른쪽 자식과 왼쪽 자식중 더 큰 자식 노드를 찾음
		if ((child < h->capacity) &&
			(h->heap[child].data < h-> heap[child + 1].data))
			child++;
		if (temp.data >= h->heap[child].data) break;
		h->heap[Parent] = h->heap[child];
		Parent = child;
		child *= 2;
		count++;
	}

	h->heap[Parent] = temp;
	return item;

}

//노드 출력 
void Heap_Print(Heap* h)
{
	Heap* heap;
	for (int i = 0; i < heap->capacity; i++)
	{
		printf("%d", heap->heap[i]);
	}
}


//레벨별 출력
void heap_levelprint(Heap* h)
{
	int i;
	int leftchild = i * 2;
	int rightchild = (i * 2) + 1;

	HeapNode temp = h->heap[(h->capacity)];

	

	
	
	

	
}

int main(void)
{

	int menu;
	int count;

	HeapNode n1 = { 90 };
	HeapNode n2 = { 89 };
	HeapNode n3 = { 70 };
	HeapNode n4 = { 36 };
	HeapNode n5 = { 75 };
	HeapNode n6 = { 63 };
	HeapNode n7 = { 65 };
	HeapNode n8 = { 21 };
	HeapNode n9 = { 18 };
	HeapNode n10 = { 15 };
	

	printf("------------------\n");
	printf(" 1. : 노드 추가\n");
	printf(" 2, : 노드 삭제\n");
	pritnf(" 3. : 레벨별 출력\n");
	printf("4. : 종료\n");
	printf("------------------\n");


	while (1)
	{
		int data;
		Heap* heap;

		printf("메뉴 입력:");
		scanf_s("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("추가할 값 입력\n");
			scanf_s("%d", &data);
			heap_insert(heap, data);
			heap_Print(heap);
			printf("노드가 이동된 횟수: %d", count); 		
			break;
		case 2:
			printf("삭제할 값 입력\n"); 
			scanf_s("%d", &data); 
			heap_delete(heap);
			heap_Print(heap);
			printf("노드가 이동된 횟수: %d", count);
			break;
		case 3:
			printf("트리 레벨별 출력");

			break;
		case 4:
			printf("종료합니다.");
			free(heap);
			break;
		}
	}

}