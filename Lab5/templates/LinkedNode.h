#ifndef LINKEDNODE_H
#define LINKEDNODE_H

template <typename type_t>
class LinkedNode {

	typedef LinkedNode<type_t> node_t;
	public:
		LinkedNode():
			prev(0), next(0){}

		LinkedNode(const node_t& orig):
			prev(0), next(0), data(orig.data){};

		LinkedNode(const node_t* n_prev, const node_t* n_next, const type_t n_data):
			prev(n_prev), next(n_next), data(n_data){};

		virtual ~LinkedNode(){};

		node_t *prev;
		node_t *next;
		type_t data;
};

#endif
