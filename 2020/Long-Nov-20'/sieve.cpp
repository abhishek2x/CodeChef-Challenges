std::vector<int> generate(int n) {
    std::vector<int> result = std::vector<int>();
    if (n < 2) {
        return result;
    }

    std::vector<bool> input(n + 1, true);
    int sqrtN = (int)sqrt(n);
    for (int i = 2; i <= sqrtN; i ++) {
        if (! input[i]) {
            continue;
        }
        for (int j = i * i; j <= n; j += i) {
            input[j] = false;
        }
    }

    result.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (input[i]) {
            result.push_back(i);
        }
    }

    return result;
}
