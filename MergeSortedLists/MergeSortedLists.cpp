#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct ListNode {
 	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==NULL) return list2;
    else if(list2==NULL) return list1;


	struct ListNode *head = list2;
	if(list1->val <= list2->val){		
		head = list1;
		if(list1->next!=NULL){
			list1 = list1->next;
		}
		else list1 = NULL;
		head->next = list2;
		list2 = head;
	}

	while((list2->next!=NULL) && (list1!=NULL)){			
		if(list1->val <= list2->next->val){	
			struct ListNode *temp = list1;	
			if(list1->next!=NULL){
				list1 = list1->next;	
			}
			else{
				list1 = NULL;
			}
			temp->next = list2->next;
			list2->next = temp;
		}
		list2 = list2->next;
	}
	
	if(list2->next==NULL && list1!=NULL){	
		list2->next = list1;
	}
    return head;
}

