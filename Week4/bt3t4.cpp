void printArrow(int n, bool left) {
    int i, j, k; string a, b;
    if (left == 0) {
        for (i = n; i > 0; i--) {
            a = "";
            for (j = 0; j < i; j++) {
                a = a + "*";
            };
            cout << b << a << endl;
            b = b + "  ";
        }
        b = "**";
        for (i = n - 1; i > 0; i--) {
            string a = "";
            for (j = 0; j < i - 1; j++) {
                a = a + "  ";
            };
            cout << a << b << endl;
            b += "*";
        }
    }

    else {
        for (i = n; i > 0; i--) {
            string a = ""; string b;
            for (j = 0; j < i - 1; j++) {
                a += " ";
            };
            for (j = 0; j < i; j++) {
                b += "*";
            }
            cout << a << b << endl;
        };
        b = "*";
        for (i = 0; i < n - 1; i++) {
            a += " ";
            b += "*";
            cout << a << b << endl;
        }
    }
}