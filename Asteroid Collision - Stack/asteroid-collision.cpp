class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for (int pos = 0; pos < asteroids.size();) {

            if (s.empty() || !(s.top() > 0 && asteroids[pos] < 0)) {
                s.push(asteroids[pos]);
                pos++;
            }

            else {
                if (abs(s.top()) == abs(asteroids[pos])) {
                    s.pop();
                    pos++;
                }

                else if (abs(s.top()) > abs(asteroids[pos])) {
                    pos++;
                }

                /* EGER KI YENI GELEN ELEMAN DAHA BUYUKSE, POS(POZISYON) SABIT KALACAK. */
                else {
                    s.pop();
                }

            }
        }

        vector<int> result(s.size());
        for (int i = s.size() - 1; i >= 0; i--) {
            result[i] = s.top();
            s.pop();
        }

        return result;
    }
};
