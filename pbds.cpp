#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
typedef tree<
    int, 
    null_type, 
    less<int>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
    ordered_set;

int main() {
    ordered_set os;

    // Inserting elements
    os.insert(1);
    os.insert(2);
    os.insert(3);

    // Finding an element
    auto it = os.find(2);
    if (it != os.end()) {
        cout << "Element 2 found" << endl;
    } else {
        cout << "Element 2 not found" << endl;
    }

    // Finding by order (0-based index)
    cout << "Element at index 1: " << *os.find_by_order(1) << endl;

    // Order of key
    cout << "Number of elements less than 3: " << os.order_of_key(3) << endl;

    // Removing an element
    os.erase(2);

    // Size of the set
    cout << "Number of elements in the set: " << os.size() << endl;

    return 0;
}