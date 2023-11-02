#include <cmath>
#include <iostream>

namespace doremistats {
template <typename T>

struct statistics {

   T mean;
   T variance;
   T skewness;
   T standardDev;
   T kurtosis;
   
};



/**
 * @brief 
 * 
 * @param arr 
 * @param l 
 * @param steps 
 * @return float 
 */
template <typename T>
T mean(T arr[], float l, float steps) {

    float m = 0;
    steps > l ? steps = l : true;
    for(int i = 0; i < l; i+=steps) {
        m+=arr[i];
    }
    return  m/(l/steps);
}

template <typename T>
/**
 * @brief calculates the nth statistic moment
 * 
 * @param arr array
 * @param l  length of array
 * @param power  n
 * @param steps how many steps
 * @param sample if is a sample (1) or population (0)
 * @return T 
 */
T moment(T arr[], float l, float power, float steps, bool sample) {

     steps > l ? steps = l : true;
       float m = mean(arr,l,steps);
       float var = 0;
       for(int i = 0; i < l; i+=steps) {
          var += pow((m-arr[i]),power);
       }
       return (sample ? var/((l/steps)-1) : var/(l/steps));
}



template <typename T>
T variance(T arr[], float l, float steps, bool sample) {
       
       steps > l ? steps = l : true;
       float m = mean(arr,l,steps);
       T var = moment(arr,l,2,1,1);
       return (sample ? var/((l/steps)-1) : var/(l/steps));
}

template <typename T>
T standardDev(T arr[], float l, float steps, bool sample) {
      return sqrt(variance(arr,l,steps,sample));
}


template <typename T>
T skewness(T arr[], float l, float steps, bool sample) {

      float std = standardDev(arr,l,steps,sample);
      float m = mean(arr,l,steps);
      T var = moment(arr,l,3,1,1);
       return (sample ? var/(((l/steps)-1)*pow(std,3)) : var/((l/steps))*pow(std,3));

}

/**
 * @brief kurtosis calculator using moment formula
 * 
 * @param arr = array 
 * @param l  = length of array
 * @param steps  = l/steps elements taken. 1/steps % faster.
 * @param sample  = if is saimpled
 * @return float 
 */
template <typename T>
T kurtosis(T arr[], float l, float steps, bool sample) {
       
       steps > l ? steps = l : true;
      
       T var = moment(arr,l,4,steps,sample);
       return (sample ? (var/((l/steps)-1))/pow(standardDev(arr,l,steps,sample),4) : (var/(l/steps))/pow(standardDev(arr,l,steps,sample),4));
}

template <typename T>
statistics<T> describe(T arr[], float l, float steps, bool sample) {
    
    statistics<T>  stats;
    stats.mean = mean(arr,l,steps);
    stats.variance = variance(arr,l,steps, sample);
    stats.skewness = skewness(arr,l,steps,sample);
    stats.standardDev = standardDev(arr,l,steps,sample);
    stats.kurtosis = kurtosis(arr,l,steps,sample);
    return stats;

}
template <typename T>
void print(statistics<T> stats) {
      
      std::cout << "mean : " << stats.mean << std::endl;
      std::cout << "variance : " << stats.variance << std::endl;
      std::cout << "standardDev : " << stats.mean << std::endl;
      std::cout << "skewness : " << stats.skewness << std::endl;
      std::cout << "kurtosis : " << stats.kurtosis << std::endl;
    
}
};