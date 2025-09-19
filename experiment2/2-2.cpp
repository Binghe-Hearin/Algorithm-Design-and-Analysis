#include<iostream>
using namespace std;
struct lnode {
	int m_data;
	lnode* m_next;
};

/*
* ����һ���½�㣬��������ӵ���ǰ�����β��
ptail: ָ��ǰ�����β��Ԫ��
data: �½���е�����
����ֵ�������´����Ľ��
��ʾ����̬�ڴ������ͷſ���ʹ��c�е�malloc/free������ʹ��c++�е�new/delete
*/
lnode* append_node(lnode* ptail, int data) {
	lnode* newnode = new lnode();
	newnode->m_data = data;
	newnode->m_next = NULL;
	ptail->m_next = newnode;
	return newnode;
}

/*
* �ͷ������ڴ�
phead: ָ������ͷԪ�ص�ָ��
*/
void destroy_list(lnode* phead) {
	lnode* current = phead;
	lnode* next;
	while (current != NULL) {
		next = current->m_next;
		free(current);
		current = next;
	}
}

/*
* ���������������ӡ��������Ԫ��ֵ
*/
void print_list_backward(lnode* phead) {
	if (phead == NULL) {
		return;
	}

	print_list_backward(phead->m_next);

	cout << phead->m_data << endl;
}

int main() {

	return 0;
}