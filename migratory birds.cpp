int migratoryBirds(vector<int> arr) {
 int counter[6] = {0}, result = 0, max = 0;

for (int i = 0; i < arr.size(); ++i) {
    int id = arr[i];

    counter[id]++;

    if (counter[id] > max) {
        max = counter[id];
        result = id;
    } else if (counter[id] == max) {
        result = fmin(result, id);
    }
}
