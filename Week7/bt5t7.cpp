double* getSquare(double number) {
    double* square = new double;
    *square = pow(number, 2);
    return square;
}