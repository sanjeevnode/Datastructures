#include <bits/stdc++.h>
using namespace std;

class Array
{
    int size;
    int current;
    int* array;

    void InsertElemets_MyArray()
    {
        int n;
        cout << "Enter the size  of Array :> ";
        cin >> n;
        if(n >= size) {
            cout << "Array size exceeds" << endl;
            i();
            return;
        }
        current = n;
        cout << "\nEntr the array elements :>" << endl;
        for(int i = 0; i < n; i++) {
            cin >> array[i];
        }
        cout << "\nElements inserted in array" << endl;
        i();
    }
    void Display_MyArray()
    {
        if(current < 0) {
            cout << "\nArray is Empty" << endl;
            i();
            return;
        }
        cout << "\nElements in array : >";
        for(int i = 0; i < current; i++)
            cout << " " << array[i] << " ";
        cout << endl;
        i();
    }
    void InsertAtPos_MyArray()
    {
        int pos, data;
        if(current < 0) {
            cout << "\nArray is empty" << endl;
            i();
            return;
        }
        cout << "\nEnter position to insert:> ";
        cin >> pos;
        cout << "\nEnter data to insert :> ";
        cin >> data;

        if(pos >= size || pos < 0) {
            cout << "\n Wrong position can't insert " << endl;
            i();
            return;
        }
        if(pos >= 1 and pos <= current + 1) {
            current++;
            for(int i = current; i > pos - 1; i--) {
                array[i] = array[i - 1];
            }
            array[pos - 1] = data;
            cout << "\nData inserted at given position" << endl;
            i();
        } else {
            cout << "\nWrong position " << endl;
            i();
            return;
        }
    }
    void Delete_MyArray()
    {
        int data;
        if(current < 0) {
            cout << "\nArray is Empty" << endl;
            i();
            return;
        }
        cout << "\nEnter the element to delete :>";
        cin >> data;
        int z;
        for(z = 0; z < current; z++)
            if(array[z] == data)
                break;

        if(z < current) {
            current--;
            for(int j = z; j < current; j++)
                array[j] = array[j + 1];
            cout << "\nElement Deleted " << endl;
            i();
        } else {
            cout << "\nElement not found in Array" << endl;
            i();
        }
    }
    void FindMax_MyArray()
    {
        if(current < 0) {
            cout << "\nArray Ampty" << endl;
            i();
            return;
        }
        cout << "\nMaximum element in array:> " << *max_element(array, array + current) << endl;
        i();
    }
    void FindMin_MyArray()
    {
        if(current < 0) {
            cout << "\nArray Empty" << endl;
            i();
            return;
        }
        cout << "\nMinimum element in array:> " << *min_element(array, array + current) << endl;
        i();
    }
    void Reverse_MyArray()
    {
        if(current < 0) {
            cout << "\nArray empty" << endl;
            i();
            return;
        }
        reverse(array, array + current);
        cout << "\nArray Reversed " << endl;
        i();
    }
    void sort_MyArray()
    {
        if(current < 0) {
            cout << "\nArray is Empty" << endl;
            i();
            return;
        }
        sort(array, array + current);
        cout << "\nArray elements Sorted" << endl;
        i();
    }
    void i()
    {
        cout << endl;
        for(int i = 0; i < 27; i++)
            cout << "*-*";
        cout << endl;
    }

public:
    Array()
    {
        current = -1;
        size = 30;
        array = new int[size];
    }
    void MyArray()
    {
        int choice;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                       Array                            |" << endl;
        cout << "  --------------------------------------------------------" << endl;
        while(1) {
            cout << endl;
            cout << "\n    X-------------Various operations on Array-------------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|       1.Insert elements in Array.           |" << endl;
            cout << "\t*       2.Display elements of Array.          *" << endl;
            cout << "\t|       3.Insert at position in Array.        |" << endl;
            cout << "\t*       4.Delete element from Array.          *" << endl;
            cout << "\t|       5.Sort the elements in Arrya.         |" << endl;
            cout << "\t*       6.Find maximum element                *" << endl;
            cout << "\t|       7.Find minimum element                |" << endl;
            cout << "\t*       8.Reverse the Array                   *" << endl;
            cout << "\t|       9.back                                |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-**-*-*-*-*" << endl;
            cout << endl;
            cout << "Enter your choice :>   ";
            cin >> choice;
            switch(choice) {
            case 1:
                InsertElemets_MyArray();
                break;
            case 2:
                Display_MyArray();
                break;
            case 3:
                InsertAtPos_MyArray();
                break;
            case 4:
                Delete_MyArray();
                break;
            case 5:
                sort_MyArray();
                break;
            case 6:
                FindMax_MyArray();
                break;
            case 7:
                FindMin_MyArray();
                break;
            case 8:
                Reverse_MyArray();
                break;
            case 9:
                return;
            default:
                cout << "\nWrong choice" << endl;
                break;
            }
        }
    }
};
struct LNode {
    int data;
    LNode* next;
    LNode(int x)
    {
        data = x;
        next = nullptr;
    }
};
struct DNode {
    int data;
    DNode *prev, *next;
    DNode(int x)
    {
        data = x;
        prev = next = nullptr;
    }
};
class SinglyLinkedList
{
    LNode* head;
    LNode* tail;
    int count()
    {
        int c = 0;
        LNode* temp = head;
        while(temp != nullptr) {
            c++;
            temp = temp->next;
        }
        return c;
    }
    void Insert_at_Beg_MySinglyList(int data)
    {
        LNode* temp = new LNode(data);
        if(head == nullptr) {
            head = tail = temp;
            cout << "\nData inserted  at Beginning " << endl;
            I();
            return;
        }
        temp->next = head;
        head = temp;
        cout << "\nData inserted  at Beginning " << endl;
        I();
    }
    void Insert_at_End_MySinglyList(int data)
    {
        LNode* temp = new LNode(data);
        if(head == nullptr) {
            head = tail = temp;
            cout << "\nData inserted  at End " << endl;
            I();
            return;
        }

        tail->next = temp;
        tail = tail->next;
        cout << "\nData inserted  at End " << endl;
        I();
    }
    void Insert_at_pos_MySinglyList(int pos, int data)
    {
        LNode* temp = new LNode(data);

        if(pos == 1) {
            Insert_at_Beg_MySinglyList(data);
            I();
            return;
        } else if(pos == count() + 1) {
            Insert_at_End_MySinglyList(data);
            return;
        } else if(1 < pos and pos <= count()) {
            LNode* ptr = head;
            for(int i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            cout << "\nData inserted at Position" << endl;
            I();
            return;
        } else {
            cout << "\nWrong Position" << endl;
            I();
        }
    }
    void Deletion_at_Beg_MySinglyList()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(head->next == nullptr) {
            head = tail = nullptr;
            cout << "\nData in node Deleted" << endl;
            I();
            return;
        }
        LNode* ptr = head;
        head = head->next;
        delete ptr;
        cout << "\nData in node Deleted" << endl;
        I();
    }
    void Deletion_at_End_MySinglyList()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(head == tail) {
            tail = head = NULL;
            cout << "\nData in node Deleted" << endl;
            I();
            return;
        }
        LNode* ptr = head;
        while(ptr->next != tail) {
            ptr = ptr->next;
        }
        delete tail;
        tail = ptr;
        tail->next = nullptr;
        cout << "\nData in node Deleted" << endl;
        I();
    }
    void Deletion_at_pos_MySinglyList(int pos)
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(pos == 1) {
            Deletion_at_Beg_MySinglyList();
            return;
        } else if(pos == count()) {
            Deletion_at_End_MySinglyList();
            return;
        } else if(1 < pos and pos < count()) {
            LNode *ptr = head, *temp = nullptr;
            for(int i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr = ptr->next;
            delete temp;
            cout << "Data deleted from given Position" << endl;
            I();
            return;
        } else {
            cout << "\nWrong position" << endl;
            I();
        }
    }
    void Display_MySinglyList()
    {
        LNode* ptr = head;
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        cout << "\nData in Linked List:> ";
        while(ptr != nullptr) {
            cout << " " << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
        I();
    }
    void Reverse_MySinglyList()
    {
        LNode *curr = head, *prev = nullptr, *next = nullptr;
        if(head == nullptr) {
            cout << "\n List is Empty" << endl;
            I();
            return;
        }
        while(curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
        cout << "\nLinked List Reveresed " << endl;
        I();
    }
    void I()
    {
        for(int i = 0; i < 27; i++)
            cout << "*-*";
        cout << endl;
    }

public:
    SinglyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void MyLinkedList()
    {
        int choice, pos, data;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                Singly Linked List                     |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X------Various operations on Singly Linked List------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                           |" << endl;
            cout << "\t*   1.Insert at Beginning   *" << endl;
            cout << "\t|   2.Insert at End         |" << endl;
            cout << "\t*   3.Insert at Position    *" << endl;
            cout << "\t|   4.Delete at Beginning   |" << endl;
            cout << "\t*   5.Delete at End         *" << endl;
            cout << "\t|   6.Delete at position    |" << endl;
            cout << "\t*   7.Display Linked List   *" << endl;
            cout << "\t|   8.Reverse Linked List   |" << endl;
            cout << "\t*   9.Number of nodes       *" << endl;
            cout << "\t|   10.Back                 |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "Enter your choice :>   ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> " << endl;
                cin >> data;
                Insert_at_Beg_MySinglyList(data);
                break;
            case 2:
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_End_MySinglyList(data);
                break;
            case 3:
                cout << "\nEnter position to insert:> ";
                cin >> pos;
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_pos_MySinglyList(pos, data);
                break;
            case 4:
                Deletion_at_Beg_MySinglyList();
                break;
            case 5:
                Deletion_at_End_MySinglyList();
                break;
            case 6:
                cout << "\nEnter position to delete:> ";
                cin >> pos;
                Deletion_at_pos_MySinglyList(pos);
                break;
            case 7:
                Display_MySinglyList();
                break;
            case 8:
                Reverse_MySinglyList();
                break;
            case 9:
                cout << "Number of nodes => " << count() << endl;
                I();
                break;
            case 10:
                return;
            default:
                cout << "\nWrong choice" << endl;
                break;
            }
        }
    }
};
class DLL
{
    DNode* head;
    DNode* tail;
    int count()
    {
        int c = 0;
        DNode* ptr = head;
        while(ptr != nullptr) {
            c++;
            ptr = ptr->next;
        }
        return c;
    }
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    void Insert_at_Beg_MyDLL(int data)
    {
        DNode* temp = new DNode(data);
        if(head == nullptr) {
            head = tail = temp;
            cout << "\nData inserted at Beginning" << endl;
            X();
            return;
        }
        temp->next = head;
        head->prev = temp;
        head = temp;
        cout << "\nData inserted at Beginning" << endl;
        X();
    }
    void Insert_at_End_MyDLL(int data)
    {
        DNode* temp = new DNode(data);
        if(head == nullptr) {
            head = tail = temp;
            cout << "\nData inserted  at End " << endl;
            X();
            return;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
        cout << "\nData inserted  at End " << endl;
        X();
    }
    void Insert_at_Pos_MyDLL(int pos, int data)
    {
        DNode* temp = new DNode(data);
        if(pos == 1) {
            Insert_at_Beg_MyDLL(data);
        } else if(pos == count() + 1) {
            Insert_at_End_MyDLL(data);
        } else if(pos > 1 and pos <= count()) {
            DNode* ptr = head;
            for(int i = 1; i < pos - 1; i++)
                ptr = ptr->next;
            temp->next = ptr->next;
            ptr->next->prev = temp;
            temp->prev = ptr;
            cout << "\nData inserted at given position ";
            X();
        } else {
            cout << "\nWrong Position" << endl;
            X();
        }
    }
    void Deletion_at_Beg_MyDLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            X();
            return;
        }
        if(head->next == nullptr) {
            head = tail = nullptr;
            cout << "\nData in node Deleted" << endl;
            X();
            return;
        }
        DNode* ptr = head;
        head = head->next;
        head->prev = NULL;
        delete ptr;
        cout << "\nData in node Deleted" << endl;
        X();
    }
    void Deletion_at_End_MyDLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            X();
            return;
        }
        if(head == tail) {
            tail = head = NULL;
            cout << "\nData in node Deleted" << endl;
            X();
            return;
        }
        DNode* ptr = head;
        while(ptr->next != tail) {
            ptr = ptr->next;
        }
        delete tail;
        tail = ptr;
        tail->next = nullptr;
        cout << "\nData in node Deleted" << endl;
        X();
    }
    void Deletion_at_pos_MyDLL(int pos)
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            X();
            return;
        }
        if(pos == 1) {
            Deletion_at_Beg_MyDLL();
            return;
        } else if(pos == count()) {
            Deletion_at_End_MyDLL();
            return;
        } else if(1 < pos and pos < count()) {
            DNode* ptr = head;
            for(int i = 1; i < pos; i++) {
                ptr = ptr->next;
            }
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
            delete ptr;
            cout << "Data deleted from given Position" << endl;
            X();
            return;
        }
    }
    void Display_MyDLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty " << endl;
            X();
            return;
        }
        cout << "\nData in Doubly Linked List :> ";
        DNode* ptr = head;
        while(ptr != nullptr) {
            cout << " " << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
        X();
    }
    void Reverse_MyDLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            X();
            return;
        }
        DNode *temp = NULL, *curr = head;
        while(curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if(temp != nullptr) {
            tail = head;
            head = temp->prev;
        }
        cout << "\nDoubly Linked List Reversed" << endl;
        X();
    }

public:
    DLL()
    {
        head = tail = nullptr;
    }
    void MyDLL()
    {
        int choice, pos, data;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                Doubly Linked List                     |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X------Various operations on Doubly Linked List------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                           |" << endl;
            cout << "\t*   1.Insert at Beginning   *" << endl;
            cout << "\t|   2.Insert at End         |" << endl;
            cout << "\t*   3.Insert at Position    *" << endl;
            cout << "\t|   4.Delete at Beginning   |" << endl;
            cout << "\t*   5.Delete at End         *" << endl;
            cout << "\t|   6.Delete at Position    |" << endl;
            cout << "\t*   7.Display DLL           *" << endl;
            cout << "\t|   8.Reverse DLL           |" << endl;
            cout << "\t*   9.Number of nodes       *" << endl;
            cout << "\t|   10.Back                 |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "Enter your choice :>   ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> " << endl;
                cin >> data;
                Insert_at_Beg_MyDLL(data);
                break;
            case 2:
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_End_MyDLL(data);
                break;
            case 3:
                cout << "\nEnter position to insert:> ";
                cin >> pos;
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_Pos_MyDLL(pos, data);
                break;
            case 4:
                Deletion_at_Beg_MyDLL();
                break;
            case 5:
                Deletion_at_End_MyDLL();
                break;
            case 6:
                cout << "\nEnter position to delete:> ";
                cin >> pos;
                Deletion_at_pos_MyDLL(pos);
                break;
            case 7:
                Display_MyDLL();
                break;
            case 8:
                Reverse_MyDLL();
                break;
            case 9:
                cout << "Number of nodes => " << count() << endl;
                X();
                break;
            case 10:
                return;
            default:
                cout << "\nWrong choice" << endl;
                break;
            }
        }
    }
};
class CLL
{
    LNode* head;
    LNode* tail;
    int count()
    {
        int c = 0;
        if(head == nullptr) {
            return c;
        }
        LNode* temp = head;
        do {
            c++;
            temp = temp->next;
        } while(temp != head);
        return c;
    }
    void Insert_at_Beg_MyCLL(int data)
    {
        LNode* temp = new LNode(data);
        if(head == nullptr) {
            tail = head = temp;
            head->next = head;
            tail->next = tail;
            cout << "\nData inserted  at Beginning " << endl;
            I();
            return;
        }
        temp->next = head;
        head = temp;
        tail->next = head;
        cout << "\nData inserted  at Beginning " << endl;
        I();
    }
    void Insert_at_End_MyCLL(int data)
    {
        LNode* temp = new LNode(data);
        if(head == nullptr) {
            head = tail = temp;
            head->next = head;
            tail->next = tail;
            cout << "\nData inserted  at End " << endl;
            I();
            return;
        }

        tail->next = temp;
        tail = tail->next;
        tail->next = head;
        cout << "\nData inserted  at End " << endl;
        I();
    }
    void Insert_at_pos_MyCLL(int pos, int data)
    {
        LNode* temp = new LNode(data);

        if(pos == 1) {
            Insert_at_Beg_MyCLL(data);
            I();
            return;
        } else if(pos == count() + 1) {
            Insert_at_End_MyCLL(data);
            return;
        } else if(1 < pos and pos <= count()) {
            LNode* ptr = head;
            for(int i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            cout << "\nData inserted at Position" << endl;
            I();
            return;
        } else {
            cout << "\nWrong Position" << endl;
            I();
        }
    }
    void Deletion_at_Beg_MyCLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(head->next == head) {
            head = tail = nullptr;
            cout << "\nData in node Deleted" << endl;
            I();
            return;
        }
        LNode* ptr = head;
        head = head->next;
        tail->next = head;
        delete ptr;
        cout << "\nData in node Deleted" << endl;
        I();
    }
    void Deletion_at_End_MyCLL()
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(head == tail) {
            tail = head = NULL;
            cout << "\nData in node Deleted" << endl;
            I();
            return;
        }
        LNode* ptr = head;
        while(ptr->next != tail) {
            ptr = ptr->next;
        }
        delete tail;
        tail = ptr;
        tail->next = head;
        cout << "\nData in node Deleted" << endl;
        I();
    }
    void Deletion_at_pos_MyCLL(int pos)
    {
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        if(pos == 1) {
            Deletion_at_Beg_MyCLL();
            return;
        } else if(pos == count()) {
            Deletion_at_End_MyCLL();
            return;
        } else if(1 < pos and pos < count()) {
            LNode *ptr = head, *temp = nullptr;
            for(int i = 1; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr = ptr->next;
            delete temp;
            cout << "Data deleted from given Position" << endl;
            I();
            return;
        } else {
            cout << "\nWrong Position" << endl;
            I();
        }
    }
    void Display_MyCLL()
    {
        LNode* ptr = head;
        if(head == nullptr) {
            cout << "\nList is Empty" << endl;
            I();
            return;
        }
        cout << "\nData in Linked List:> ";
        do {
            cout << " " << ptr->data << " ";
            ptr = ptr->next;
        } while(ptr != head);
        cout << endl;
        I();
    }
    void Reverse_MyCLL()
    {
        LNode *curr = head, *prev = nullptr, *next = nullptr;
        if(head == nullptr) {
            cout << "\n List is Empty" << endl;
            I();
            return;
        }
        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while(curr != head);
        tail = head;
        head->next = prev;
        head = prev;
        cout << "\nLinked List Reveresed " << endl;
        I();
    }
    void I()
    {
        for(int i = 0; i < 27; i++)
            cout << "*-*";
        cout << endl;
    }

public:
    CLL()
    {
        head = nullptr;
        tail = nullptr;
    }
    void MyCLL()
    {
        int choice, pos, data;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |               Circular Singly Linked List             |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X--Various operations on Circular Singly Linked List--X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                           |" << endl;
            cout << "\t*   1.Insert at Beginning    *" << endl;
            cout << "\t|   2.Insert at End         |" << endl;
            cout << "\t*   3.Insert at Position    *" << endl;
            cout << "\t|   4.Delete at Beginning   |" << endl;
            cout << "\t*   5.Delete at End         *" << endl;
            cout << "\t|   6.Delete at position    |" << endl;
            cout << "\t*   7.Display Linked List   *" << endl;
            cout << "\t|   8.Reverse Linked List   |" << endl;
            cout << "\t*   9.Number of nodes       *" << endl;
            cout << "\t|   10.Back                 |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "Enter your choice :>   ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> " << endl;
                cin >> data;
                Insert_at_Beg_MyCLL(data);
                break;
            case 2:
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_End_MyCLL(data);
                break;
            case 3:
                cout << "\nEnter position to insert:> ";
                cin >> pos;
                cout << "\nEnter data to insert :> ";
                cin >> data;
                Insert_at_pos_MyCLL(pos, data);
                break;
            case 4:
                Deletion_at_Beg_MyCLL();
                break;
            case 5:
                Deletion_at_End_MyCLL();
                break;
            case 6:
                cout << "\nEnter position to delete:> ";
                cin >> pos;
                Deletion_at_pos_MyCLL(pos);
                break;
            case 7:
                Display_MyCLL();
                break;
            case 8:
                Reverse_MyCLL();
                break;
            case 9:
                cout << "Number of nodes => " << count() << endl;
                I();
                break;
            case 10:
                return;
            default:
                cout << "\nWrong choice" << endl;
                break;
            }
        }
    }
};
class LinkedList : public SinglyLinkedList, public DLL, public CLL
{
public:
    void CallList()
    {
        int choice;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                    LINKED LISTS                        |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X-----------Various Types of Linked List-------------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                                 |" << endl;
            cout << "\t*   1.Singly Linked List          *" << endl;
            cout << "\t|   2.Doubly Linked List          |" << endl;
            cout << "\t*   3.Circular Singly Linked List *" << endl;
            cout << "\t|   4.Back                        |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1: {
                MyLinkedList();
            } break;
            case 2: {
                MyDLL();
            } break;
            case 3: {
                MyCLL();
            } break;
            case 4:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Stack_array
{
    int* arr;
    int top;
    int size;

public:
    Stack_array()
    {
        size = 100;
        top = -1;
        arr = new int[size];
    }
    void X()
    {
        for(int i = 0; i < 28; i++)
            cout << "*-*";
        cout << endl;
    }
    bool isEmpty()
    {
        if(top == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if(top == size)
            return true;
        return false;
    }
    void push(int data)
    {
        if(isFull()) {
            cout << "\nStack is Full" << endl;
            return;
            X();
        }
        top++;
        arr[top] = data;
    }
    int pop()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return -1;
            X();
        }
        int val = arr[top];
        top--;
        return val;
    }
    void peek(int i)
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return;
            X();
        }
        if(i >= 0 and i <= top) {
            cout << "\nElement at index " << i << " => " << arr[i] << endl;
            X();
        } else {
            cout << "\nWrong Index" << endl;
            X();
        }
    }
    int stackTop()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return -1;
            X();
        }
        return arr[top];
    }
    void Stack_size()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return;
            X();
        }
        cout << "\nSize of Stack => " << top + 1 << endl;
        X();
    }
    void Display_Stack_array()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return;
            X();
        }
        cout << "\nData in stack :> ";
        for(int i = top; i >= 0; i--) {
            cout << " " << arr[i] << " ";
        }
        cout << endl;
        X();
    }
    void Reverse_Stack()
    {
        Stack_array temp1, temp2;
        while(!isEmpty()) {
            temp1.push(stackTop());
            pop();
        }
        while(!temp1.isEmpty()) {
            temp2.push(temp1.stackTop());
            temp1.pop();
        }
        while(!temp2.isEmpty()) {
            push(temp2.stackTop());
            temp2.pop();
        }
    }
    void MyStack_array()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                  Stack using Array                    |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {

            cout << endl;
            cout << "    X---------Various operations on Stack---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Push in Stack             *" << endl;
            cout << "\t|   2.Pop in Stack              |" << endl;
            cout << "\t*   3.Peek at index in stack    *" << endl;
            cout << "\t|   4.Display data in Stack     |" << endl;
            cout << "\t|   5.Display Stack Top         |" << endl;
            cout << "\t*   6.Check if Stack is Empty   *" << endl;
            cout << "\t|   7.Check if Stacki is Full   |" << endl;
            cout << "\t*   8.Display size of stack     *" << endl;
            cout << "\t|   9.Reverse Stack             |" << endl;
            cout << "\t|   10.Back                     |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to push :> ";
                cin >> val;
                push(val);
                cout << "\nData inserted in stack" << endl;
                X();
                break;
            case 2:
                val = pop();
                cout << "\n " << val << " deleted from Stack" << endl;
                X();
                break;
            case 3:
                cout << "\nEnter index to peek :> ";
                cin >> val;
                peek(val);
                break;
            case 4:
                Display_Stack_array();
                break;
            case 5:
                if(stackTop() != -1) {
                    cout << "\nData  at Top of Stack :> " << stackTop() << endl;
                    X();
                } else {
                    cout << "\nStack is Empty" << endl;
                    X();
                }
                break;
            case 6:
                if(isEmpty()) {
                    cout << "\nStack is empty" << endl;
                    X();
                } else {
                    cout << "\nStack is not Empty" << endl;
                    X();
                }
                break;
            case 7:
                if(isFull()) {
                    cout << "\nStack is Full" << endl;
                    X();
                } else {
                    cout << "\nStack is not Full" << endl;
                    X();
                }
                break;
            case 8:
                Stack_size();
                break;
            case 9:
                Reverse_Stack();
                break;
            case 10:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Stack_LL
{
    LNode* top;

public:
    Stack_LL()
    {
        top = nullptr;
    }
    void X()
    {
        for(int i = 0; i < 28; i++)
            cout << "*-*";
        cout << endl;
    }
    bool isEmpty()
    {
        return (top == nullptr) ? true : false;
    }
    void push(int data)
    {
        LNode* temp = new LNode(data);
        temp->next = top;
        top = temp;
    }
    int pop()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return -1;
            X();
        }
        int val = top->data;
        top = top->next;
        return val;
    }
    int peek()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return -1;
            X();
        }
        int val = top->data;
        return val;
    }
    void Stack_size()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return;
            X();
        }
        int s = 0;
        LNode* temp = top;
        while(temp) {
            s++;
            temp = temp->next;
        }
        cout << "\n Size of Stack :> " << s << endl;
        X();
    }
    void Display_StackLL()
    {
        LNode* temp = top;
        cout << "\nData in stack :> ";
        while(temp) {
            cout << " " << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        X();
    }
    void checkEmpty()
    {
        if(isEmpty()) {
            cout << "\nStack is Empty" << endl;
            X();
        } else {
            cout << "\nStack is Not Empty" << endl;
            X();
        }
    }
    void Reverse_stackLL()
    {
        Stack_LL temp1, temp2;
        while(!isEmpty()) {
            temp1.push(peek());
            pop();
        }
        while(!temp1.isEmpty()) {
            temp2.push(temp1.peek());
            temp1.pop();
        }
        while(!temp2.isEmpty()) {
            push(temp2.peek());
            temp2.pop();
        }
    }
    void MyStack_LL()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |             Satck using Linked List                   |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X---------Various operations on Stack---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Push in Stack             *" << endl;
            cout << "\t|   2.Pop in Stack              |" << endl;
            cout << "\t*   3.Peek in stack             *" << endl;
            cout << "\t|   4.Display data in Stack     |" << endl;
            cout << "\t*   5.Check if Stack is Empty   *" << endl;
            cout << "\t*   6.Display size of stack     *" << endl;
            cout << "\t|   7.Reverse Stack             |" << endl;
            cout << "\t|   8.Back                      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to push :> ";
                cin >> val;
                push(val);
                cout << "\nData inserted in stack" << endl;
                X();
                break;
            case 2:
                val = pop();
                if(val == -1) {
                    return;
                }
                cout << "\n " << val << " deleted from Stack" << endl;
                X();
                break;
            case 3:
                val = peek();
                if(val == -1) {
                    return;
                }
                cout << "\nValue at top in stack :> " << val << endl;
                X();
                break;
            case 4:
                Display_StackLL();
                break;
            case 5:
                checkEmpty();
                break;
            case 6:
                Stack_size();
                break;
            case 7:
                Reverse_stackLL();
                break;
            case 8:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Stack : public Stack_array, public Stack_LL
{
public:
    void MyStack()
    {
        int choice;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                          Stack                        |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X----------Various implementation of Stack-----------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|   1.Stack using Array           |" << endl;
            cout << "\t*   2.Stack using Linked List     *" << endl;
            cout << "\t|   3.Back                        |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1: {
                MyStack_array();
            } break;
            case 2: {
                MyStack_LL();
            } break;
            case 3:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Queue_array
{
    int front, rear;
    int* myqueue;
    int size;

public:
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    Queue_array()
    {
        front = -1;
        rear = -1;
        size = 100;
        myqueue = new int[size];
    }

    bool isFull()
    {
        if(front == 0 && rear == size - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int value)
    {
        if(isFull()) {
            cout << "Queue is full!!" << endl;
            X();
        } else {
            if(front == -1)
                front = 0;
            rear++;
            myqueue[rear] = value;
        }
    }
    int deQueue()
    {
        int value;
        if(isEmpty()) {
            cout << "Queue is empty!!" << endl;
            X();
            return (-1);
        } else {
            value = myqueue[front];
            if(front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            return (value);
        }
    }

    void displayQueue()
    {
        if(isEmpty()) {
            cout << endl << "Queue is Empty!!" << endl;
            X();
        } else {
            cout << "\nData in Queue : >" << endl;
            for(int i = front; i <= rear; i++)
                cout << myqueue[i] << "\t";
            cout << endl;
            X();
        }
    }
    int Getfront()
    {
        if(isEmpty()) {
            cout << endl << "Queue is Empty!!" << endl;
            return -1;
            X();
        }
        return myqueue[front];
    }
    void checkEmpty()
    {
        if(isEmpty()) {
            cout << "\nQueue is Empty" << endl;
            X();
        } else {
            cout << "\nQueue is NOt Empty" << endl;
            X();
        }
    }
    void checkfull()
    {
        if(isFull()) {
            cout << "\nQueue is Full" << endl;
            X();
        } else {
            cout << "\nQueue is NOt Full" << endl;
            X();
        }
    }
    void Display_qsize()
    {
        if(isEmpty()) {
            cout << "\nQueue is Empty" << endl;
            return;
            X();
        }
        cout << "\nSize of Queue :> " << (rear - front) + 1 << endl;
        X();
    }
    void Reverse_Queue()
    {
        if(isEmpty()) {
            cout << "\nQueue is Empty" << endl;
            X();
        }
        Stack_array s;
        while(!isEmpty()) {
            s.push(myqueue[front]);
            deQueue();
        }
        while(!s.isEmpty()) {
            enQueue(s.stackTop());
            s.pop();
        }
    }
    void MyQueue_array()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                  Queue using Array                    |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X---------Various operations on Queue---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Enqueue in Queue          *" << endl;
            cout << "\t|   2.Dequeue in Queue          |" << endl;
            cout << "\t*   3.Display data in Queue     *" << endl;
            cout << "\t|   4.Display front of Queue    |" << endl;
            cout << "\t*   5.Check if Queue is Empty   *" << endl;
            cout << "\t*   6.Check if Queue is Full    *" << endl;
            cout << "\t|   7.Reverse Queue             |" << endl;
            cout << "\t|   8.Display Queue Size        *" << endl;
            cout << "\t|   9.Back                      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> ";
                cin >> val;
                enQueue(val);
                cout << "\nData inserted in Queue" << endl;
                X();
                break;
            case 2:
                val = deQueue();
                if(val == -1)
                    return;
                cout << "\n " << val << " deleted from Stack" << endl;
                X();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                if(Getfront() == -1)
                    return;
                cout << "\nData in front of queue :> " << Getfront() << endl;
                X();
                break;
            case 5:
                checkEmpty();
                break;
            case 6:
                checkfull();
                break;
            case 7:
                Reverse_Queue();
                break;
            case 8:
                Display_qsize();
                break;
            case 9:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Queuelist
{
    LNode* front;
    LNode* rear;

public:
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    Queuelist()
    {
        front = rear = NULL;
    }

    bool isempty()
    {
        if(front == NULL) {
            return true;
        }
        return false;
    }

    void enqueue(int x)
    {

        LNode* new_node = new LNode(x);
        if(isempty()) {
            front = rear = new_node;
            return;
        }
        rear->next = new_node;
        rear = new_node;
    }

    int dequeue()
    {
        int val;
        if(isempty()) {
            cout << "Queue is empty" << endl;
            X();
            return -1;
        }
        if(front == rear) {
            val = front->data;
            front = rear = NULL;
            return val;
        }

        LNode* temp = front;
        val = temp->data;
        front = front->next;
        delete temp;
        return val;
    }

    void display()
    {
        if(isempty()) {
            cout << "Queue Is Empty" << endl;
            return;
        }

        LNode* temp = front;
        cout << "\nData in Queue :> ";
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        X();
    }

    int get_front()
    {
        return (isempty()) ? -1 : front->data;
    }

    void get_size()
    {
        if(isempty()) {
            cout << "Queue Is Empty" << endl;
            X();
            return;
        }
        LNode* temp = front;
        int count = 0;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << "Queue Contains " << count << " elements" << endl;
        X();
    }

    void reverse()
    {
        if(isempty()) {
            cout << "\nQueue is Empty" << endl;
            X();
            return;
        }
        Stack_LL sl;

        while(!isempty()) {
            sl.push(get_front());
            dequeue();
        }
        while(!sl.isEmpty()) {
            enqueue(sl.peek());
            sl.pop();
        }
        cout << "\nQueue Reversed" << endl;
        X();
    }
    void MyQueue_LL()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |             Queue using Linked List                   |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X---------Various operations on Queue---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Enqueue in Queue          *" << endl;
            cout << "\t|   2.Dequeue in Queue          |" << endl;
            cout << "\t|   3.Display front of Queue    |" << endl;
            cout << "\t*   4.Check if Queue is Empty   *" << endl;
            cout << "\t|   5.Display Queue Size        *" << endl;
            cout << "\t|   6.Reverse Stack             |" << endl;
            cout << "\t*   7.Display data in Queue     *" << endl;
            cout << "\t|   8.Back                      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> ";
                cin >> val;
                enqueue(val);
                cout << "\nData inserted in Queue" << endl;
                X();
                break;
            case 2:
                dequeue();
                if(val == -1)
                    return;
                cout << "\n " << val << " deleted from Queue" << endl;
                X();
                break;
            case 3:
                if(get_front() == -1) {
                    cout << "The Queue Is Empty" << endl;
                    X();
                } else {
                    cout << "The Front Element in Queue Is  :" << get_front() << endl;
                    X();
                }
                break;
            case 4:
                if(isempty()) {
                    cout << "Queue Is Empty" << endl;
                    X();
                } else {
                    cout << "Queue Is Not Empty" << endl;
                    X();
                }
                break;
            case 5:
                get_size();
                break;
            case 6:
                reverse();
                break;
            case 7:
                display();
                break;
            case 8:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Queue : public Queue_array, public Queuelist
{
public:
    void MyQueue()
    {
        int choice;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                          QUEUE                        |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X----------Various implementation of Queue-----------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|   1.Queue using Array           |" << endl;
            cout << "\t*   2.Queue using Linked List     *" << endl;
            cout << "\t|   3.Back                        |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1: {
                MyQueue_array();
            } break;
            case 2: {
                MyQueue_LL();
            } break;
            case 3:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class BST
{
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int x)
        {
            data = x;
            left = right = nullptr;
        }
    };

    Node* root;

public:
    BST()
    {
        root = nullptr;
    }

    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }

    Node* insert(Node* b, int x)
    {
        if(b == nullptr)
            return new Node(x);
        if(b->data > x)
            b->left = insert(b->left, x);
        if(b->data < x)
            b->right = insert(b->right, x);
        return b;
    }

    void inorder(Node* b)
    {
        if(b == nullptr)
            return;
        inorder(b->left);
        cout << " " << b->data << " ";
        inorder(b->right);
    }

    void preorder(Node* b)
    {
        if(b == nullptr)
            return;
        cout << " " << b->data << " ";
        preorder(b->left);
        preorder(b->right);
    }

    void postorder(Node* b)
    {
        if(b == nullptr)
            return;
        postorder(b->left);
        postorder(b->right);
        cout << " " << b->data << " ";
    }

    bool search(Node* b, int x)
    {
        if(b == nullptr)
            return false;
        if(b->data == x)
            return true;
        if(b->data > x)
            return search(b->left, x);
        if(b->data < x)
            return search(b->right, x);
        return false;
    }

    int findMax(Node* b)
    {
        if(b == nullptr)
            return -1;
        else if(b->right == nullptr)
            return b->data;
        else
            return findMax(b->right);
    }

    int findMin(Node* b)
    {
        if(b == nullptr)
            return -1;
        else if(b->left == nullptr)
            return b->data;
        else
            return findMax(b->left);
    }

    Node* Delete(int x, Node* b)
    {

        Node* temp;
        if(b == NULL)
            return NULL;
        else if(x < b->data)
            b->left = Delete(x, b->left);
        else if(x > b->data)
            b->right = Delete(x, b->right);
        else if(b->left && b->right) {
            temp = new Node(findMin(b->right));
            b->data = temp->data;
            b->right = Delete(b->data, b->right);
        } else {
            temp = b;
            if(b->left == NULL)
                b = b->right;
            else if(b->right == NULL)
                b = b->left;
            delete temp;
        }
        return b;
    }

    void search(int x)
    {
        if(search(root, x)) {
            cout << "\nData found in Tree" << endl;
            X();
        } else {
            cout << "\nData Not found in Tree" << endl;
            X();
        }
    }

    void Delete(int x)
    {
        if(root == nullptr) {
            cout << "\nTree is Empty" << endl;
            X();
        } else if(!search(root, x)) {
            cout << "\nData not found in Tree" << endl;
            X();
        } else {
            root = Delete(x, root);
            cout << "\nData deleted from Tree" << endl;
            X();
        }
    }

    void MyBST()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                  BINARY SEARCH TREE                   |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X-------Various operations on BST-------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                             |" << endl;
            cout << "\t*   1.Insert in Tree          *" << endl;
            cout << "\t|   2.Inorder Traversal       |" << endl;
            cout << "\t|   3.Preorder Traversal      |" << endl;
            cout << "\t*   4.Postorder Traversal     *" << endl;
            cout << "\t|   5.Search data in Tree     *" << endl;
            cout << "\t|   6.Find Maximum Data       |" << endl;
            cout << "\t*   7.Find Minimum Data       *" << endl;
            cout << "\t|   8.Delete Data             |" << endl;
            cout << "\t*   9.Back                    |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> ";
                cin >> val;
                root = insert(root, val);
                cout << "\nData inserted in Tree" << endl;
                X();
                break;
            case 2:
                cout << "\nData in Inorder Traversal :> ";
                inorder(root);
                cout << endl;
                X();
                break;
            case 3:
                cout << "\nData in Preorder Traversal :> ";
                preorder(root);
                cout << endl;
                X();

                break;
            case 4:
                cout << "\nData in Postorder Traversal :> ";
                postorder(root);
                cout << endl;
                X();
                break;
            case 5:
                cout << "\nEnter data to Search :> ";
                cin >> val;
                search(val);
                break;
            case 6:
                val = findMax(root);
                if(val == -1) {
                    cout << "\nTree is Empty" << endl;
                    X();
                } else {
                    cout << "\nMaximum data in tree:> " << val << endl;
                    X();
                }
                break;
            case 7:
                val = findMin(root);
                if(val == -1) {
                    cout << "\nTree is Empty" << endl;
                    X();
                } else {
                    cout << "\nMinimum data in tree:> " << val << endl;
                    X();
                }
                break;
            case 8:
                cout << "\nEnter data to Delete :> ";
                cin >> val;
                Delete(val);
                break;
            case 9:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class minHeap
{
    int* harray;
    int maxcap;
    int current;
    void swap(int* x, int* y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int parent(int i)
    {
        return i / 2;
    }
    int left(int i)
    {
        return 2 * i;
    }
    int right(int i)
    {
        return 2 * i + 1;
    }
    int deletemin()
    {
        if(current < 1)
            return -1;
        if(current == 1) {
            int k = harray[current];
            current--;
            return k;
        }
        int val = harray[1];
        harray[1] = harray[current];
        current--;
        minHeapyfiy(1);
        return val;
    }
    int getmin()
    {
        return harray[1];
    }
    void deletekey(int key)
    {
        if(current < 1) {
            cout << "\nHeap is Empty" << endl;
            X();
            return;
        }
        if(!search(key)) {
            cout << "\nData not found in Heap" << endl;
            X();
            return;
        }
        int i;
        for(int j = 1; j <= current; j++)
            if(harray[j] == key) {
                i = j;
                break;
            }
        harray[i] = -1;
        while(i != 1 and harray[parent(i)] > harray[i]) {
            swap(&harray[i], &harray[parent(i)]);
            i = parent(i);
        }
        deletemin();
    }
    void insertkey(int key)
    {
        if(maxcap < current) {
            cout << "\n Overflow : could not insert key " << endl;
            X();
            return;
        }
        current++;
        int i = current;
        harray[i] = key;
        while(i != 1 and harray[parent(i)] > harray[i]) {
            swap(&harray[i], &harray[parent(i)]);
            i = parent(i);
        }
    }
    void minHeapyfiy(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(harray[l] < harray[r]) {
            if(l < current and harray[l] < harray[i])
                smallest = l;
            else if(r < current and harray[r] < harray[i])
                smallest = r;
        }
        if(smallest != i) {
            swap(&harray[i], &harray[smallest]);
            minHeapyfiy(smallest);
        }
    }
    void displayHeap()
    {
        cout << "\nElements in MinHeap:> " << endl;
        for(int i = 1; i <= current; i++)
            cout << " " << harray[i] << " ";
        cout << endl;
        X();
    }
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    bool search(int x)
    {
        if(*find(harray, harray + current, x) < current)
            return true;
        return false;
    }

public:
    minHeap()
    {
        current = 0;
        maxcap = 100;
        harray = new int[maxcap];
    }
    void MyMinHeap()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                      MIN-HEAP                         |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X---------Various operations on Min-Heap---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Insert data in Heap       *" << endl;
            cout << "\t|   2.Display data in Heap      |" << endl;
            cout << "\t|   3.Delete data from Heap     |" << endl;
            cout << "\t*   4.Delete Minimum from Heap  *" << endl;
            cout << "\t|   5.Display minimum in Heap   *" << endl;
            cout << "\t|   6.Back                      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> ";
                cin >> val;
                insertkey(val);
                cout << "\nData inserted in Heap" << endl;
                X();
                break;
            case 2:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                displayHeap();
                break;
            case 3:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                cout << "\nEnter data to delete :> ";
                cin >> val;
                deletekey(val);
                cout << "\nData Deleted from Heap" << endl;
                X();
                break;
            case 4:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                deletemin();
                cout << "\nMinimum data deleted from Heap:" << endl;
                X();
                break;
            case 5:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                cout << "\nMinimum in Hea: >" << getmin() << endl;
                X();
                break;
            case 6:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class maxHeap
{
    int* harray;
    int maxcap;
    int current;

    void swap(int* x, int* y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int parent(int i)
    {
        return i / 2;
    }
    int left(int i)
    {
        return 2 * i;
    }
    int right(int i)
    {
        return 2 * i + 1;
    }
    int getmax()
    {
        return harray[1];
    }
    void maxHeapyfy(int i)
    {
        int l = left(i);
        int r = right(i);
        int greatest = i;
        if(harray[l] > harray[r])
            if(l < current and harray[l] > harray[i])
                greatest = l;
        if(harray[r] > harray[l])
            if(r < current and harray[r] > harray[i])
                greatest = r;

        if(greatest != i) {
            swap(&harray[i], &harray[greatest]);
            maxHeapyfy(greatest);
        }
    }
    void insert(int key)
    {
        if(maxcap < current) {
            cout << "\nCouldn't insert key in heap" << endl;
            X();
            return;
        }
        current++;
        int i = current;
        harray[i] = key;

        while(i != 1 and harray[parent(i)] < harray[i]) {
            swap(&harray[i], &harray[parent(i)]);
            i = parent(i);
        }
    }
    int deletemax()
    {
        if(current < 1) {
            cout << "Heap is Empty" << endl;
            X();
            return -1;
        }
        if(current == 1) {
            int val = harray[current];
            current--;
            return val;
        }
        int val = harray[1];
        harray[1] = harray[current];
        current--;
        maxHeapyfy(1);
        return val;
    }
    void Delete(int key)
    {
        if(current < 1) {
            cout << "\nHeap is Empty" << endl;
            X();
            return;
        }
        if(!search(key)) {
            cout << "\nData not found in heap" << endl;
            X();
            return;
        }
        int i;
        for(int j = 1; j <= current; j++) {
            if(harray[j] == key) {
                i = j;
                break;
            }
        }
        harray[i] = INT_MAX;
        while(i != 1 and harray[parent(i)] < harray[i]) {
            swap(&harray[i], &harray[parent(i)]);
            i = parent(i);
        }
        deletemax();
    }
    void displayHeap()
    {
        cout << "\nData in heap:> " << endl;
        for(int i = 1; i <= current; i++) {
            cout << harray[i] << " ";
        }
        cout << endl;
        X();
    }
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    bool search(int x)
    {
        if(*find(harray, harray + current, x) < current)
            return true;
        return false;
    }

public:
    maxHeap()
    {
        current = 0;
        maxcap = 500;
        harray = new int[maxcap];
    }
    void MyMaxHeap()
    {
        int choice, val;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                      MAX-HEAP                         |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X---------Various operations on Max-Heap---------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                               |" << endl;
            cout << "\t*   1.Insert data in Heap       *" << endl;
            cout << "\t|   2.Display data in Heap      |" << endl;
            cout << "\t|   3.Delete data from Heap     |" << endl;
            cout << "\t*   4.Delete Maximum from Heap  *" << endl;
            cout << "\t|   5.Display Maximum in Heap   *" << endl;
            cout << "\t|   6.Back                      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1:
                cout << "\nEnter data to insert :> ";
                cin >> val;
                insert(val);
                cout << "\nData inserted in Heap" << endl;
                X();
                break;
            case 2:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                displayHeap();
                break;
            case 3:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                cout << "\nEnter data to delete :> ";
                cin >> val;
                Delete(val);
                cout << "\nData Deleted from Heap" << endl;
                X();
                break;
            case 4:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                deletemax();
                cout << "\nMaximum data deleted from Heap:" << endl;
                X();
                break;
            case 5:
                if(current < 1) {
                    cout << "\nHeap is empty" << endl;
                    X();
                    return;
                }
                cout << "\nMaximium in Heap: >" << getmax() << endl;
                X();
                break;
            case 6:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Heap : public minHeap, public maxHeap
{
public:
    void MyHeap()
    {
        int choice;
        cout << "  ------------------------------------------------------" << endl;
        cout << " |                          HEAP                        |" << endl;
        cout << "  ------------------------------------------------------" << endl << endl;

        while(1) {
            cout << endl;
            cout << "    X-----Various implementation of Heap-----X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-* " << endl;
            cout << "\t|   1.MAX-HEAP  |" << endl;
            cout << "\t*   2.MIN-HEAP  *" << endl;
            cout << "\t|   3.Back      |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*" << endl;
            cout << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1: {
                MyMaxHeap();
            } break;
            case 2: {
                MyMinHeap();
            } break;
            case 3:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};
class Graph
{
    int V;
    list<int>* l;

public:
    void X()
    {
        for(int i = 0; i < 30; i++)
            cout << "*-*";
        cout << endl;
    }
    Graph()
    {
        V = 0;
    };
    Graph(int n)
    {
        V = n;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if(i == j) {
            l[i].push_back(j);
            return;
        }
        if(undir)
            l[j].push_back(i);
    }
    void display_adjList()
    {
        if(V < 0) {
            cout << "\nNothing in Graph to display" << endl;
            X();
            return;
        }
        cout << "\nAdjacency List Representation of Graph :> " << endl;
        for(int i = 0; i < V; i++) {
            cout << "\nVertex " << i;
            for(auto x : l[i])
                cout << "-->" << x;
            cout << "-->x" << endl;
        }
        cout << endl;
        X();
    }
    void bfs(int source)
    {
        if(V == 0) {
            cout << "\nNothing in Graph to Traverse " << endl;
            X();
            return;
        }
        if(!(0 <= source and source < V)) {
            cout << "\nWrong vertex for Traversal" << endl;
            X();
            return;
        }
        cout << "\nBreath First Traversal :> " << endl;
        queue<int> Q;
        bool* visited = new bool[V];
        Q.push(source);
        visited[source] = true;

        while(!Q.empty()) {
            int x = Q.front();
            cout << " " << x << " ";
            Q.pop();

            for(auto nbr : l[x]) {
                if(!visited[nbr]) {
                    Q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout << endl;
        X();
    }
    void dfsHelper(int val, bool* visited)
    {
        visited[val] = true;
        cout << " " << val << " ";
        for(int nbr : l[val]) {
            if(!visited[nbr]) {
                dfsHelper(nbr, visited);
            }
        }
    }
    void dfs(int source)
    {
        if(V == 0) {
            cout << "\nNothing in Graph to Traverse " << endl;
            X();
            return;
        }
        if(!(0 <= source and source < V)) {
            cout << "\nWrong vertex for Traversal" << endl;
            X();
            return;
        }
        cout << "\nDepth First Traversal :> " << endl;
        bool* visited = new bool[V];
        dfsHelper(source, visited);
        cout << endl;
        X();
    }
    void MyGraph()
    {
        int choice, val, n;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                        GRAPH                          |" << endl;
        cout << "  -------------------------------------------------------" << endl << endl;
        cout << "\nEnter number of vertex in Graph :> ";
        cin >> n;
        Graph g(n);
        while(1) {
            cout << endl;
            cout << "    X----Various operations on Graph----X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|                             |" << endl;
            cout << "\t*   1.Add Edges               *" << endl;
            cout << "\t|   2.Print Adjacency List    |" << endl;
            cout << "\t|   3.Depth First Traversal   *" << endl;
            cout << "\t*   4.Bredth First Traversal  |" << endl;
            cout << "\t|   5.Back                    *" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\nEnter your choice :> ";
            cin >> choice;
            switch(choice) {
            case 1: {
                int a, b;
                cout << "\nEnter the vertices in pair to add Edge :> " << endl;
                cout << "*vertices should be in range of [0,n) *" << endl;
                cout << "Example :-> '1 2' for n=3 and directed" << endl;
                cout << "->";
                cin >> a >> b;
                if(!(0 <= a and a < n) || !(0 <= b and b < n)) {
                    cout << "\nVertex out of range" << endl;
                    X();
                    return;
                }
                g.addEdge(a, b);
                cout << "Edge is added between Vertices " << endl;
                X();
            } break;
            case 2:
                g.display_adjList();
                break;
            case 3:
                cout << "\nEnter source vertex for Traversal :> ";
                cin >> val;
                g.dfs(val);
                break;
            case 4:
                cout << "\nEnter source vertex for Traversal :> ";
                cin >> val;
                g.bfs(val);
                break;
            case 5:
                return;
            default:
                cout << "\nWrong choice" << endl;
            }
        }
    }
};

class Node {
public:
    int id;
    string Name;
    string Branch;
    float cgpa;
    Node *next;
    Node(int id,string Name,string Branch,float cgpa) {
        this->id=id;
        this->Name=Name;
        this->Branch= Branch;
        this->cgpa=cgpa;
        next=nullptr;
    }
    ~Node() {
        if(next!=nullptr)
            delete next;
    }
};

class studentHash {
    Node **table;
    int cs;
    int ts;
    int hashfunction(int id) {
        return (id % ts);
    } 
    void rehash() {
        Node **oldtable = table;
        int oldts =ts;
        cs =0;
        ts = 2*ts;
        table = new Node *[ts];
        
        for(int i=0;i<ts;i++)
            table[i] = NULL;
        
        for(int i=0;i<oldts;i++) {
            Node * temp = oldtable[i];
            
            while(temp!=NULL) {
                int id = temp->id;
                string name = temp->Name;
                string branch = temp->Branch;
                float cg = temp->cgpa;
                
                insert (id,name,branch,cg);
                temp= temp->next;
            }
            if(oldtable[i]!=NULL) 
                delete oldtable[i];
        }
        delete [] oldtable;
    }
    void X() {
        for(int i=0;i<30;i++)
            cout<<"*-*";
        cout<<endl;
    }
    void insert (int id,string name,string branch,float cg) {
        int idx =hashfunction(id);
        Node * newNode = new Node(id,name,branch,cg);
        newNode->next=table[idx];
        table[idx]=newNode;
        
        cs++;
        float lf =cs/float(ts);
        
        if(lf>0.7)
            rehash();
        
    }
    bool isPresent(int id) {
        int idx = hashfunction(id);
        
        Node *temp  = table[idx];

        if(temp==nullptr)
            return false;
        while(temp!=nullptr){
            if(temp->id==id)
                return true;
          temp=temp->next;
        }
        return false;
    }
    Node * search(int key) {
        int idx = hashfunction(key);

        Node *temp=table[idx];

        while(temp!=nullptr){
            if(temp->id==key)
                return temp;
            temp=temp->next;
       }
       return nullptr;
    }
    void erase(int id)
    {
        if(!isPresent(id)) {
            cout<<"\nData not found"<<endl;
            X();
            return;
        }
        int idx =hashfunction(id);
        
        Node *temp =table[idx];
        
        if(temp->next!=NULL and id==temp->id)
        {
            Node *to_delete=temp;
            table[idx]=table[idx]->next;
            to_delete->next=NULL;
            delete to_delete;
            return;
        }
        if(temp->next==nullptr){
            delete temp;
            table[idx]=NULL;
            return;
        }
        while(temp->next->id!=id){
            temp=temp->next;
        }
        if(temp->next->next==nullptr){
            delete temp->next;
            temp->next=nullptr;
        }
        else {
            Node *p=temp->next;
            temp->next=p->next;
            p=NULL;
            delete p;
        }
    }
    
    void printhashtable()
    {
        for(int i=0;i<ts;i++) {
            cout<<"\tBucket "<< i;
            Node *temp =table[i];
            while(temp!=nullptr) {
                cout<<"--> "<<temp->id;
                temp= temp->next;
            }
            cout<<"-x"<<endl;
        }
    }
    void display() 
    {
        cout<<"\t-------------------------------------------------------"<<endl;
        cout<<"\t|"<<left<<setw(10)<<"ID"<<"|"<<left<<setw(20)<<"Name"<<"|";
        cout<<left<<setw(10)<<"Branch"<<"|"<<left<<setw(10)<<"CGPA"<<"|"<<endl;
        cout<<"\t-------------------------------------------------------"<<endl;
        
        for(int i=0;i<ts;i++) {

            Node *temp =table[i];
            
            while(temp!=nullptr) {
                cout<<"\t|"<<left<<setw(10)<<temp->id<<"|"<<left<<setw(20)<<temp->Name;
                cout<<"|"<<left<<setw(10)<<temp->Branch<<"|"<<left<<setw(10)<<temp->cgpa<<"|"<<endl;
                cout<<"\t-------------------------------------------------------"<<endl;
                temp= temp->next;
            }
        }
    }
public:
    studentHash(int dfsize = 7) {
        cs =0;
        ts = dfsize;
        table = new Node * [ts];
        for(int i =0;i<ts;i++)
            table[i] = nullptr;
    }
    void Myhash()
    {
        int choice,id;
        float cg;
        string name,branch;
        cout << "  -------------------------------------------------------" << endl;
        cout << " |                       Hashing                         |" << endl;
        cout << "  -------------------------------------------------------" << endl;
        cout<<"\n*****we are making records of  student data containing there id's,name ,branch and cgpa stored in the hash table*****"<<endl;
        while(1) {
            cout << endl;
            cout << "\n    X-------------Various operations in Hashing-------------X" << endl << endl;

            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
            cout << "\t|       1.Insert data in Hashtable    |" << endl;
            cout << "\t*       2.Print Hashtable             *" << endl;
            cout << "\t|       3.Display data in Hashtable   |" << endl;
            cout << "\t*       4.Search  data                *" << endl;
            cout << "\t|       5.Delete  data                |" << endl;
            cout << "\t|       6.Back                        |" << endl;
            cout << "\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-**" << endl;
            cout << endl;
            cout << "Enter your choice :>   ";
            cin >> choice;
            
            switch(choice) {
                case 1: 
                    cout<<"\nEnter Id, Name , Branch ,Cgpa of student :>"<<endl;
                    cin>>id>>name>>branch>>cg;
                    insert(id,name,branch,cg);
                    cout<<"\nRecord inserted "<<endl;
                    X();
                    break;
                case 2:
                    printhashtable();
                    X();
                    break;
                case 3:
                    display();
                    cout<<endl;
                    X();
                    break;
                case 4: {
                    cout<<"\nEnter id to search :> ";
                    cin>>id;
                    Node *temp =search(id);
                    if(temp==NULL) {
                        cout<<"\nNo record is present for this id "<<endl;
                        X();
                        return;
                    }
                    cout<<"\t-------------------------------------------------------"<<endl;
                    cout<<"\t|"<<left<<setw(10)<<temp->id<<"|"<<left<<setw(20)<<temp->Name;
                    cout<<"|"<<left<<setw(10)<<temp->Branch<<"|"<<left<<setw(10)<<temp->cgpa<<"|"<<endl;
                    cout<<"\t-------------------------------------------------------"<<endl;
                    X();
                }
                    break;
                case 5:
                    cout<<"\nEnter the id to delete :> ";
                    cin>>id;
                    erase(id);
                    X();
                    break;
                case 6:
                    return;
                default :
                    cout<<"\nWrong choice"<<endl;
                    X();
            }
        }
    }
};
int main()
{
    int choice;
    while(1) {
        cout << endl;
        cout << "\t ----------------------------------------------------" << endl;
        cout << "\t|     Implementation of various Data structures      |" << endl;
        cout << "\t ----------------------------------------------------" << endl << endl;
        cout << "\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
        cout << "\t\t|   1.Array                 |" << endl;
        cout << "\t\t*   2.Linked List           *" << endl;
        cout << "\t\t|   3.Stack                 |" << endl;
        cout << "\t\t*   4.Queue                 *" << endl;
        cout << "\t\t|   5.Binary Search Tree    |" << endl;
        cout << "\t\t*   6.Heap                  *" << endl;
        cout << "\t\t|   7.Graph                 |" << endl;
        cout << "\t\t*   8.Hashing               *" << endl;
        cout << "\t\t|   9.Exit                  |" << endl;
        cout << "\t\t*                           *" << endl;
        cout << "\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
        cout << endl;
        cout << "Enter your choice:-> ";
        cin >> choice;
        switch(choice) {
        case 1: {
            Array A;
            A.MyArray();
        } break;
        case 2: {
            LinkedList L;
            L.CallList();
        } break;
        case 3: {
            Stack s;
            s.MyStack();
        } break;
        case 4: {
            Queue q;
            q.MyQueue();
        } break;
        case 5: {
            BST b;
            b.MyBST();
        } break;
        case 6: {
            Heap h;
            h.MyHeap();
        } break;
        case 7: {
            Graph g;
            g.MyGraph();
        } break;
        case 8: {
            studentHash sh;
            sh.Myhash();
        } break;
        case 9:
            exit(0);
        default:
            cout << "\nWrong choice " << endl;
        }
    }
}
