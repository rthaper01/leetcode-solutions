class PlusOne {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.back() != 9) {
            digits[digits.size() - 1]++;
            return digits;
        }
        else {
            if (digits.size() == 1) {
                return {1, 0};
            }
            else {
                digits.resize(digits.size() - 1);
                vector<int> result = plusOne(digits);
                result.push_back(0);
                return result;
            }
        }
    }
};

int main() {
  PlusOne solution = PlusOne();
  print(solution.plusOne({1, 2, 3});
  print(solution.plusOne({9});
  print(solution.plusOne({8, 9, 9, 9, 9});
}
