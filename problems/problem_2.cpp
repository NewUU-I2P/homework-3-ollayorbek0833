float problemSolution2(float i, float j, float k) {
    float result;
    if(i>=j&&i>=k){
        result = i;
    } else if(j>=k){
        result = j;
    } else{
        result = k;
    }
    return result;
}