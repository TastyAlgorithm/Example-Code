vector<int> QuickSort(vector<int> list) {
	if (list.size() <= 1)
		return list;

	vector<int> prev;
	vector<int> next;

	for (int i = 1; i < list.size(); i++) {
		if (list[0] < list[i])
			next.push_back(list[i]);
		else
			prev.push_back(list[i]);
	}

	prev = QuickSort(prev);
	prev.push_back(list[0]);
	next = QuickSort(next);
	prev.insert(prev.end(), next.begin(), next.end());

	return prev;
}
