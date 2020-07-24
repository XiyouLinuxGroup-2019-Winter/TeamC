#include <stdio.h>
#include<stdlib.h>

typedef struct Data
{
    int n;
    struct Data *next;
}Node,*LinkList;
typedef struct RNode
{
    int n1;
    struct RNode *prior;
    struct RNode *next;
}Node_Round,*LinkList_Round;



LinkList Creat_Tailinsert();
LinkList Creat_Headinsert();
int Add_Headinsert(Node *head);
int Add_Tailinsert(Node *head);
int Delete_Node(int i,Node *p_head);
int Delete_Keynodes(int key,Node *p_head);
LinkList Find_Node(int i,Node *find);
LinkList Find_Keynodes(int key,Node *find);
int Revise(int key,Node *head);
void Linklistprint(Node *head);
int Clean_Linklist(Node *head);  //整表删除
//循环链表
LinkList Creat_Round_Linklist();
LinkList_Round  Creat_PH_Tailinsert_Linklist();

int main()
{
    Node *head;
    RNode *head1;
    char select='1';
    while(1)
    {
        getchar();
        printf("**************************************\n");
        printf("***********1.头插建立链表*************\n");
        printf("***********2.尾插建立链表*************\n");
        printf("***********3.头结点后插入结点*********\n");
        printf("***********4.尾结点后插入结点*********\n");
        printf("***********5.删除结点（结点位置）*****\n");
        printf("***********6.删除结点（结点数据）*****\n");
        printf("***********7.查找结点（结点位置）*****\n");
        printf("***********8.查找结点（结点数据）*****\n");
        printf("***********9.修改结点内容*************\n");
        printf("***********10.建立循环链表************\n");
        printf("***********11.建立双向链表************\n");
        printf("***********12.整表删除****************\n");
        printf("***********L.打印链表数据*************\n");
        printf("***********Q.退出*********************\n");
        printf("**************************************\n");
        scanf("%c",&select);
        getchar();
        head=NULL;
        switch(select)
        {
            case '1'://
                {
                    head=Creat_Headinsert();
                    getchar();getchar();
                    break;
                }
            case '2'://
                {
                    head=Creat_Tailinsert();
                    getchar();getchar();
                    break;
                }
            case '3'://
                {
                    if(Add_Headinsert (head)==0)
                        printf("\n插入失败！链表不存在!\n");
                    else
                        printf(" 插入成功!");
                    getchar();getchar();
                    break;
                }
            case '4':
                {
                    if(Add_Tailinsert (head)==0)
                        printf("\n插入失败！链表不存在!\n");
                    else
                        printf(" 插入成功!");
                    getchar();getchar();
                    break;
                }
            case '5':
                {
                    int i;
                    printf("\n请问您要删除第几个结点?\n");
                    scanf("%d",&i);
                    Delete_Node (i,head);
                    getchar();getchar();
                    break;
                }
            case '6':
                {
                    int key;
                    printf("\n请问您要删除的数据内容为?\n");
                    scanf("%d",&key);
                    Delete_Keynodes (key,head);
                    getchar();getchar();
                    break;
                }
            case '7':
                {
                    int i;
                    printf("\n请问您要找第几个结点?\n");
                    scanf("%d",&i);
                    if(Find_Node (i,head)!= NULL)
                        printf("%p",Find_Node (i,head));
                    else
                        printf("\n没找到！\n");
                    getchar();getchar();
                    break;
                }
            case '8': 
                {
                    int key;
                    printf("\n请输入你要找的数据是多少？\n");
                    scanf("%d",&key);
                    if(Find_Keynodes(key,head)!= NULL)
                        printf("%p",Find_Keynodes (key,head));
                    else
                        printf("\n没找到！\n");
                    Find_Keynodes (key,head);
                    getchar();getchar();
                    break;
                }
            case '9':
                {
                    int key;
                    printf("\n请输入你要修改的数据是？\n");
                    scanf("%d",&key);
                    if(Revise (key,head))
                    {
                        printf("\n 修改成功!\n");
                    }
                    else
                        printf("\n 修改失败 \n");
                    getchar();getchar();
                    break;
                }
            case '10':
                {
                    head=Creat_Round_Linklist ();
                    getchar ();getchar ();
                }
            case '11':
                {
                    head1=Creat_PH_Tailinsert_Linklist ();
                    getchar ();getchar ();
                }
            case '12':
                {
                    if(Clean_Linklist (head)==0)//单链表的整表删除
                        printf("整表删除失败!");
                    else
                        printf("整表删除成功!");
                    getchar ();getchar ();
                }
            case 'L': 
                {
                    printf("\n链表的数据如下\n");
                    Linklistprint(head);
                    getchar();getchar();
                    break;
                }
            case 'Q':
                {
                    return 0;
                };
        }

    }
    return 0;
}

LinkList Creat_Tailinsert()
{
    Node *head,*p1,*p2;
    head=p1=(LinkList )malloc(sizeof(Node));
    p2=(LinkList )malloc(sizeof(Node));
    if(p2==NULL)
        return NULL;
    scanf("%d",&p2->n);
    while(p2->n!=-1)
    {
        p1->next=p2;
        p1=p2;
        p2=(LinkList )malloc(sizeof(Node));
        scanf("%d",&p2->n);
    }
    p1->next==NULL;
    free(p2);
    return head;
}

LinkList Creat_Headinsert()
{
    Node *head,*p2;
    head=(LinkList )malloc(sizeof(Node));
    head->next=NULL;
    p2=(LinkList )malloc(sizeof(Node));
    if(p2==NULL)
        return NULL;
    scanf("%d",&p2->n);
    while(p2->n!=-1)
    {
        p2->next=head->next;
        head->next=p2;
        p2=(LinkList )malloc(sizeof(Node));
        scanf("%d",&p2->n);
    }
    free(p2);
    return head;
}

int Add_Headinsert(Node *head)
{
    if(head==NULL)   //链表为空，无需操作  
        return 0;
    int n;
    Node *insert;
    printf("请输入在链表头部要插入的数字(或其他数据):\n");
    scanf("%d",&n);
    insert=(LinkList )malloc(sizeof(Node));
    if(insert==NULL)
        return 0;
    insert->n=n;
    insert->next=head->next;
    head->next=insert;
    return 1;
}

int Add_Tailinsert(Node *head)
{
    if(head==NULL)
        return 0;
    int n;
    Node *insert;
    printf("请输入在链表尾部要插入的数字(或其他数据):\n");
    scanf("%d",&n);
    insert=(LinkList )malloc(sizeof(Node));
    if(insert==NULL)
        return 0;
    insert->n=n;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=insert;
    insert->next=NULL;
    return 1;
}

int Delete_Node(int i,Node *p_head)
{
    if(p_head->next==NULL)
        return 0;
    Node *p_tail=p_head;
    while(i--)
    {
        p_head=p_tail;
        p_tail=p_tail->next;//删除时i的数目不包含头结点
        if(p_tail==NULL)
            return 0;
    }
    p_head->next=p_tail->next;
    free(p_tail);
    return 1;
}

int Delete_Keynodes(int key,Node *p_head)
{
    if(p_head->next==NULL)
        return 0;
    Node *p_tail=p_head;
    int flag=0;                 // 判断链表中有无key值的结点
    while(1)
    {
        p_head=p_tail;
        p_tail=p_tail->next;//删除时i的数目不包含头结点
        if(p_tail==NULL)
            break;
        if(p_tail->n==key)
        {
            flag=1;
            p_head->next=p_tail->next;
            free(p_tail);
        }
    }
    if(flag==0)
        return 0;
    else
        return 1;
}

LinkList Find_Node(int i,Node *find)
{
    if(find->next==NULL)
        return 0;
    while(i--)
    {
        find=find->next;
        if(find==NULL)
            return NULL;
    }
    return find;
}

LinkList Find_Keynodes(int key,Node *find)
{
    if(find->next==NULL)
        return 0;
    int flag=0;
    while(find!=NULL)
    {
        if(find->n==key)
        {
            flag=1;
            return find;
        }
        find=find->next;
    }
    if(flag==0)
        return NULL;
}

int Revise(int key,Node *head)
{
    Node *revise;
    int revise_key;
    if(head->next==NULL)
    {
        printf("\n链表为空！无法操作！请重新选择!\n");
        return 0;
    }
    printf("\n请输入你要修改的数字:\n");
    scanf("%d",&revise_key);
    if(Find_Keynodes (revise_key,head)!=NULL)
    {
        revise=Find_Keynodes (revise_key,head);
    }
    else
    {
        printf("\n未找到此数据!\n");
        return 0;
    }
    printf("你要将%d修改为多少?",revise_key);
    scanf("%d",&revise->n);
    return 1;
}
void Linklistprint(Node *head)
{
    if(head==NULL)
    {
        printf("\n 链表为空，没有数据\n");
        return ;
    }
    head=head->next;
    while(head!=NULL)
    {
        printf("%d ",head->n);
        head=head->next;
    }
}

LinkList Creat_Round_Linklist()
{
    Node *head,*tail,*p2;
    head=tail=(LinkList )malloc(sizeof(Node));
    p2=(LinkList )malloc(sizeof(Node));
    if(p2==NULL)
        return NULL;
    scanf("%d",&p2->n);
    while(p2->n!=-1)
    {
        tail->next=p2;
        tail=p2;
        p2=(LinkList )malloc(sizeof(Node));
        scanf("%d",&p2->n);
    }
    tail->next==head;
    free(p2);
    return tail;
}

int Clean_Linklist(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    if(head->next==NULL)
    {
        free(head);
        return 1;
    }
    Node *tail;
    while(tail!=NULL)
    {
        tail=head->next;
        free(head);
        head=tail;
    }
    return 1;
}

LinkList_Round  Creat_PH_Tailinsert_Linklist()
{
    Node_Round  *head,*p1,*p2;
    head=p1=(LinkList_Round)malloc(sizeof(Node_Round));
    if(head==NULL)
        return NULL;
    p2=(LinkList_Round)malloc(sizeof(Node_Round));
    if(p2==NULL)
        return NULL;
    scanf("%d",&p2->n1);
    while(p2->n1!=-1)
    {
        p1->next = p2;
        p2->prior = p1;
        p1=p2;
        p2=(LinkList_Round)malloc(sizeof(Node_Round));
        scanf("%d",&p2->n1);
    }
    p1->next=NULL;
    free(p2);
    return head;
}

