float problemSolution1(float consumed_water) {
    float cost,fix;
    fix = 13;
    // write your code here
    if (consumed_water <= 30) {
        cost = fix + (consumed_water * 0.4);
    }
    else if (consumed_water <= 50) {
        cost = fix + ((consumed_water - 30) * 0.12) + (30 * 0.4);
    }
    else if (consumed_water <= 60) { // Fix: Changed "30" to "50" in the condition
        cost = fix + ((consumed_water - 50) * 1.4) + (30 * 0.4) + (20 * 0.12); // Fix: Changed "04" to "0.4"
    }
    else{
        cost = fix + ((consumed_water - 60) * 1.5) + (30 * 0.4) + (20 * 0.12) + (10 * 1.4); // Fix: Corrected the formula
    }
    return cost;
}

