Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;
 
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);


	if (a->data <= b->data) {
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else {
		result = b;
		result->next = SortedMerge(a, b->next);
	}

	return result;
}

Node* mergeKLists(Node* arr[], int last)
{
	
	while (last != 0) {
		int i = 0, j = last;

		
		while (i < j) {
		
			arr[i] = SortedMerge(arr[i], arr[j]);

			i++, j--;
			if (i >= j)
				last = j;
		}
	}

	return arr[0];
}
