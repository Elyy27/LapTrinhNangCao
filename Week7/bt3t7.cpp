void swap(int* a, int* b) {
    int* temp;
    temp = new int;
    *temp = *a;
    *a = *b;
    *b = *temp;
}