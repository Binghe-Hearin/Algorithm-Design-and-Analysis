#include<iostream>
using namespace std;
struct lnode {
	int m_data;
	lnode* m_next;
};

/*
* 构建一个新结点，并将其添加到当前链表的尾部
ptail: 指向当前链表的尾部元素
data: 新结点中的数据
返回值：返回新创建的结点
提示：动态内存分配和释放可以使用c中的malloc/free，或者使用c++中的new/delete
*/
lnode* append_node(lnode* ptail, int data) {
	lnode* newnode = new lnode();
	newnode->m_data = data;
	newnode->m_next = NULL;
	ptail->m_next = newnode;
	return newnode;
}

/*
* 释放链表内存
phead: 指向链表头元素的指针
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
* 逆序遍历单链表，打印输出链表各元素值
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