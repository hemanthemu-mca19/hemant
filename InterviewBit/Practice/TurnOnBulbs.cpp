// GATXUWWYDFFHN4SK64F6H3X6UVUCRGMR6BXJ4JAPT2MMG5QI5VRQLQNE


// CODE

int Solution::solve(int A) {
    vector<int> rem = {0,1,2,2,2,2};
    return 2*(A/6) + rem[A%6];
}
