#include <stdio.h>
#include<stdlib.h>

typedef struct DCNode
{
    int data;
    struct DCNode *prior;
    struct DCNode *next;
}DCNode,*DCLink_list;

DCLink_list List_creat_Head(DCNode *head);
int List_Insert_Head(DCNode *head,int insert_data);
int List_Insert_Tail(DCNode *head,int insert_data);

int  main()
{
    DCNode *head; 
    head = List_creat_Head(head);
    return 0;
}

DCLink_list List_creat_Head(DCNode *head)
{
    DCNode *q;
    int N;
    head = (DCNode *)malloc(sizeof(DCNode));
    if(head == NULL)
        return NULL;;
    //
    head->next = head , head->prior = head;
    printf("请输入你要创建链表结点的个数：");
    scanf("%d",&N);
    printf("请依次输入你要输入的数据:");
    while( N-- )
    {
         q = (DCNode *)malloc(sizeof(DCNode));
        if(q == NULL)
            return NULL;;
         scanf("%d",&(q->data));
         q->next = head->next;
         head->next = q;
         q->prior = head;
         head->prior = q;
    }
    return head;
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


