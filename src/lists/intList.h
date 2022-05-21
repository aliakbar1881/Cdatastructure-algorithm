typedef struct intList {
	int *list;
	int size;
	/** typedef int (*size)(int*) size; */
	int (*getIndex)(int, struct intList);
	void (*setIndex)(int, int, struct intList);
	void (*print)(struct intList);

} intList;

