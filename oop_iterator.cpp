#include <iostream> 
#include <cstring>
#include <cstdio>
using namespace std;
template<class T>
class collect;
template<class T> 
class score {
	T _ch, _ma, _en;
public:
	score(T ch, T ma, T en):_ch(ch), _en(en), _ma(ma) {}
	score() = default;
};

template<class T>	//iterator 的类型应该为被遍历对象的指针（数组名） 
class Iterator {
public:
	virtual bool operator == (const Iterator<T>& _it) = 0;
	virtual Iterator& operator ++ (int) = 0;
	virtual bool operator != (const Iterator<T>& _it) = 0;
	virtual T* operator *() = 0;
};
template<class T>
class arr_iterator: public Iterator<T> {
	T* _scores;
public:
	arr_iterator(collect<T>& arr_collect) {
		_scores = arr_collect->_scores;
	}
	bool operator == (const Iterator<T>& _it) {
		if (_scores = _it._scores) return 1;
		return 0;
	}
	bool operator != (const Iterator<T>& _it) {
		return !(*this == _it);
	}
	Iterator<T>& operator ++ (int) {
		_scores ++;
		return *this;
	}
	T* operator * () {return _scores;}
};





template<class T>				// collect的成员应为被便利对象的地址，队列的首地址 
class collect {
public:
	friend class Iterator;
	virtual T* begin() = 0;
	virtual T* end() = 0;
};

template<class T>
class arr_collect: public collect<T> {
	T* _scores;
public:
	T* begin() {return _scores;}
	T* begin() {return _scores + }
	
};
class Pass {
public:
	
}

float analyze (iterator<T>& begin, iterator<T>& end) {
	float total = 0.0, pass = 0.0;
	for (iterator p = begin, p != end; p ++) {
		if (pass(*p)) {
			pass ++;
		}
		total ++;
	}
	return pass / total;
}







////

////template<class T>
////class arr_collection {
////public:
////	T* head;
////}
////template <class T> 
////class link_node{
////private:
////	T* score;
////	link_node* next = NULL;
////};
////template <class T> 
////class link_list {
////private:
////	link_node<T>* _head;
////public:
////	friend class link_node<T>;
////	link_list<T>(): _head(NULL) {};
////	link_list<T>(T* head): _head(head) {};
////};
int main ()
{
//	link_list_collect<float> link_scores (score(100, 100, 100), score(0, 0, 0));
//	cout << analyze (link_scores) << endl;
	score<int> arr[2] = {score(0,0,0), score(0,0,0)}
	arr_collect<int> arr_scores(arr);
	cout << analyze (arr_scores) << endl;
}

