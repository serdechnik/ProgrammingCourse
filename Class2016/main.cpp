#include <iostream>
#include <windows.h>


using namespace std;

class Node
{
public:
    int number;
    Node* last;
    Node* next;
};

void english(const char*eng);

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* ptrLast = NULL;
    short action = -1;

    while(1)
    {
        english("1. Add item\n");
        english("2. View queue\n");
        english("3. Remove an item\n");
        english("4. Search item\n");
        english("0. Exit\n");
        english("Your choice:");
        cin>>action;

        if (action == 0)
        {
            system("CLS");
            break;
        }

        if (action == 1)
        {
            system("CLS");
            int numb = -1;
            english("Enter the number: ");
            cin>>numb;
            Node* ptr = new Node;
            ptr->number = numb;
            ptr->next = NULL;
            tail = ptr;
            if (head == NULL)
            {
                head = ptr;
                ptrLast = ptr;
                ptr->last = NULL;
                system("CLS");
                continue;
            }
            ptr->last = ptrLast;
            ptrLast->next = ptr;
            ptrLast = ptr;
            system("CLS");
            continue;
        }

        if (action == 2)
        {
            system("CLS");
            Node* ptr = NULL;
            if (head == NULL)
            {
                english("\t Queue is empty \n");
                system("PAUSE");
                system("CLS");
                continue;
            }
            english("Queue\n");
            ptr = tail;
            while (1)
            {
                cout<<ptr->number<<" ";
                if (ptr->last == 0)
                    break;
                ptr = ptr->last;
            }
            cout<<"\n";
            system("PAUSE");
            system("CLS");
            continue;
        }

        if (action == 3)
        {
            system("CLS");
            Node* ptrDelete = NULL;
            if (head == NULL)
            {
                english("\t Queue is empty \n");
                system("PAUSE");
                system("CLS");
                continue;
            }
            if (head->next == NULL)
            {
                head = NULL;
                tail = NULL;
                delete tail;
                continue;
            }
            ptrDelete = head;
            head = ptrDelete->next;
            head->last = NULL;
            delete ptrDelete;
            continue;
        }

        if (action == 4)
        {
            system("CLS");
            Node* ptr = NULL;
            int key = -1;
            if (head == NULL)
            {
                english("\t List is empty \n");
                system("PAUSE");
                system("CLS");
                continue;
            }
            english("Enter the element to search:");
            cin>>key;
            ptr = head;
            while (1)
            {
                if (key == ptr->number)
                {
                    english("\n\t The item is found \n");
                    break;
                }
                if (ptr->next == NULL)
                {
                    english("\n\t Item not found \n");
                    break;
                }
                ptr = ptr->next;
            }
            system("PAUSE");
            system("CLS");
            continue;
        }

        if (action > 4)
        {
            system("CLS");
            english("\t Error. Re-enter \n");
            system("PAUSE");
            system("CLS");
            continue;
        }
    }
}
    char word[100];
    cout<<word;
