#ifndef LIST_H_
#define LIST_H_
struct Item{
	public:
		Item(int _value,Item *_next, Item *_pri){
			value = _value;
			next = _next;
			pri = _pri;
		}

		int value;
		Item *next;
		Item *pri;
};

class List{
	private:
		Item *begin;
		Item *end;
		int size;
	public:
		List(){ begin = 0; end =0;}
		List(int c_size);
		bool isempty;
		void visit(void (*pf)(Item &));
		void pop(Item *_item);
		Item * iterator();
};

void getItem(Item &) { return *pri};

#endif
