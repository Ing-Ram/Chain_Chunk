//
// Created by Chad Ingram on 9/27/19.
//

#ifndef UNTITLED5_CHUNKLIST_H
#define UNTITLED5_CHUNKLIST_H

#include <iostream>
using namespace std;
const int arrSize = 8;
//create a struct to build chunk
template <class T>
struct Node
{
    T values[arrSize];
    int size;
    Node*next;
};

//creating the chunkList class
template <class T>
class ChunkList
{
private:
    Node<T>*head;
    Node<T>*tail;
    int size;

public:
    ChunkList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    ~ChunkList(){
        Node<T>* temp;
        while(head != nullptr){
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void Append(T item)
    {
      if(head == nullptr)
      {
          head = new Node<T>;
          head->size = 0;
          head->values[head->size++]=item;
          tail = new Node<T>;
          tail->size = 0;
          tail->values[tail->size++]=item;
          head->next = tail;
      }else if(tail->size<arrSize){
          tail->values[tail->size++]=item;
      }else{
          Node<T>*newNode = new Node<T>;
          newNode->size = 0;
          newNode->values[newNode->size++]=item;
          tail->next = newNode;
          tail = tail->next;
          size++;
      }
    }





    int GetLength()
    {
        int len = 0;
        Node<T>* temp=tail;
        while(tail != nullptr)
        {
            len+=tail->size;
            tail = tail->next;
        }
        return len;
    }

    Node<T> GetIndex(int i)
    {
        int count = 1;
        Node<T>*temp = head->next;
        while(temp != nullptr)
        {
            for(int i = 0; i < temp->size; i++)
            {
                if(i == count)
                    return temp->values[i];
                else
                {
                    count++;
                }
            }
            temp = temp->next;
        }
        return 0;
    }

    bool Remove(T item)
    {
        Node<T>*temp=head->next;
        while(temp != nullptr)
        {
            for(int i = 0; i < temp->size; i++)
            {
                if(temp->values[i]==item)
                {
                    for(int j = 0; j<temp->size-1;j++ )
                    {
                        temp->values[j]=temp->values[j+1];
                    }
                    temp -> size--;
                    return true;
                }
            }
            temp = temp->next;
        }
        return false;
    }

    void Print()
    {
        int count=0;
        Node<T>*temp = head->next;

        while(temp != nullptr)
        {
            cout << "\nlist" << count<<endl;
            for(int i = 0; i<temp->size;i++)
            {
                cout<<temp->values[i]<<" "<<endl;
            }
            count++;
            temp = temp->next;
        }
    }

    void Search(T item){
        Node<T> *temp = head;
        while(temp!=nullptr)

        {
            for(int i = 0; i < temp->size; i++)
                if(temp->values[i]== item){

                    cout << " found "<<endl;
                    break;
                }else{
                    cout << "not found"<<endl;
                    continue;
                }
            temp = temp->next;
        }

    }


};






#endif //UNTITLED5_CHUNKLIST_H
