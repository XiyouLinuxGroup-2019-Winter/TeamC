#include <stdio.h>
#include<stdlib.h>

typedef struct DCNode
{
    int data;
    struct DCNode *prior;
    struct DCNode *next;
}DCNode,*DCLink_list;

void List_Init(DCLink_list *head);                    //链表的初始化
int List_Insert_Head(DCNode *head,int insert_data);   //链表的头插
int List_Insert_Tail(DCNode *head,int insert_data);   //链表的尾插
DCLink_list  List_Find(DCNode *head,int find_data);   //链表结点数据的查找
void List_Delete(DCNode *head,int delete_data);       //链表结点的删除
void List_Insert_Pos_Before(DCNode *Node,DCNode *newNode); //将新结点插入Node结点之前
void List_Insert_Pos_After(DCNode *Node,DCNode *newNode);  //将新结点插入Node结点之后 
int List_Is_Empty(DCNode *head);                           //判断链表是否为空
int List_Free(DCNode *head);                               //释放链表中所有的数据结点，不包括头结点
int List_Destory(DCNode *head);                            //销毁链表，包括头结点

int  main()
{
    return 0;
}

void List_Init(DCLink_list *head)
{
    (*head) = (DCNode *)malloc(sizeof(DCNode));
    (*head)->next = *head;
    (*head)->prior = *head;
}

int List_Insert_Head(DCNode *head,int insert_data)
{
    DCNode *temp = (DCNode *)malloc(sizeof(DCNode));
    if(temp == NULL)
        return -1;
    temp->data = insert_data;
    //
    temp->next = head->next;
    head->next = temp;
    temp->prior = head;
    head->prior = temp;
    return 1;
}

int List_Insert_Tail(DCNode *head,int insert_data)
{
    DCNode *temp = (DCNode *)malloc(sizeof(DCNode));
    if(temp == NULL)
        return -1;
    temp->data = insert_data;
    //
    head->prior->next = temp;
    temp->prior = head->prior;
    temp->next = head;
    head->prior = temp;
    return 1;
}

DCLink_list  List_Find(DCNode *head,int find_data)
{
    DCNode *cur = head->next;
    while( cur != NULL )
    {
        if(cur->data == find_data)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

void List_Delete(DCNode *head,int delete_data)
{
    DCNode *cur = head->next;
    while(cur != NULL)
    {
        if(cur->data == delete_data)
        {
            head->prior->next = head->next;
            head->next->prior = head->prior;
            free(head);
            head = NULL;
        }
    }
}

void List_Insert_Pos_Before(DCNode *Node,DCNode *newNode)
{
    newNode->prior = Node->prior;
    Node->prior->next = newNode;
    newNode->next = Node;
    Node->prior = newNode;
}

void List_Insert_Pos_After(DCNode *Node,DCNode *newNode)
{
    newNode->next = Node->next;
    Node->next->prior = newNode;
    newNode->prior = Node;
    Node->next = newNode;
}

int List_Is_Empty(DCNode *head)
{
    if(head->next == head && head->prior == head)
    {
        return 1;
    }
    return 0;
}

int List_Destory(DCNode *head)
{
    List_Free(head);
    free(head);
    head = NULL;
}

int List_Free(DCNode *head)
{
    DCNode *temp_free;
   if(head != NULL)
   {
        head->prior->next = NULL;
        while((temp_free=head->next) != NULL)
        {
            head->next = temp_free->next;
            free(temp_free);
        }
   }
   head->next = head->prior =head;   //NULL
}
