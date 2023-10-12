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

//��� ���� 
HeapNode* Heap_Create()
{
	return (Heap*)malloc(sizeof(Heap));
}

//��� �߰� 
HeapNode Heap_Insert(Heap* h, HeapNode newNode)
{
	int i, count;
	i = ++(h->capacity);

	//���� ����� �����Ͱ� �θ� ����� �����ͺ��� ũ��
	while ((i != 1) && (newNode.data > h->heap[i / 2].data))
	{
		
		h->heap[i] = h->heap[i / 2];
		i /= 2;
		count++;
	}

	h->heap[MAX] = newNode;

}

//��� ���� 
HeapNode Heap_delete(Heap* h)
{
	int Parent, child;
	int count;
	HeapNode item, temp;

	//��Ʈ ��� 
	item = h->heap[1];
	temp = h->heap[(h->capacity)--];
	Parent = 1;
	child = 2;

	while (child < h->capacity)
	{
		//���� ����� ������ �ڽİ� ���� �ڽ��� �� ū �ڽ� ��带 ã��
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

//��� ��� 
void Heap_Print(Heap* h)
{
	Heap* heap;
	for (int i = 0; i < heap->capacity; i++)
	{
		printf("%d", heap->heap[i]);
	}
}


//������ ���
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
	printf(" 1. : ��� �߰�\n");
	printf(" 2, : ��� ����\n");
	pritnf(" 3. : ������ ���\n");
	printf("4. : ����\n");
	printf("------------------\n");


	while (1)
	{
		int data;
		Heap* heap;

		printf("�޴� �Է�:");
		scanf_s("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("�߰��� �� �Է�\n");
			scanf_s("%d", &data);
			heap_insert(heap, data);
			heap_Print(heap);
			printf("��尡 �̵��� Ƚ��: %d", count); 		
			break;
		case 2:
			printf("������ �� �Է�\n"); 
			scanf_s("%d", &data); 
			heap_delete(heap);
			heap_Print(heap);
			printf("��尡 �̵��� Ƚ��: %d", count);
			break;
		case 3:
			printf("Ʈ�� ������ ���");

			break;
		case 4:
			printf("�����մϴ�.");
			free(heap);
			break;
		}
	}

}