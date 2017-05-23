#pragma once
#include <iostream>

template <typename T>

class Queue2
{
private:

	struct queue
	{
		T key;
		queue *next;
	};
	queue *begin;
	queue *head;
	int topIndex;
public:
	Queue2()
	{
		begin = NULL;
		head = NULL;
		topIndex = 0;

	}

	~Queue2()
	{
		queue *p = begin;
		while (p != NULL)
		{
			p = begin->next;
			delete begin;
			begin = p;
		}
	}
	void Push(T d)
	{
		{
			queue *p = new queue;
			p->key = d;
			p->next = NULL;

		
				if (begin != NULL)
				{
					head->next = p;
					head = p;
				}
				else begin = head = p;
			
		}
		topIndex++;
		
	}
		T Pop()
		{
			topIndex--;
			if (topIndex >= 0)
			{
				T temp = begin->key;
				queue*pv = begin;
				begin = begin->next;
				delete pv;
				return temp;
			}
			else throw "Очередь пустая";
		}


	};