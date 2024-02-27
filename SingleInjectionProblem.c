#include <stdio.h>

int main(int argc, char* argv[]) {
    // 注射器型号
    float model[] = {1.0, 3.0, 5.0};
    // 注射剂量
    float capacity[] = {0.8, 2.0, 3.0, 4.0, 5.0};

    // 循环变量
    int i, j, k;
    float dosage, single_dose;
    int injections;

    // 遍历每一种注射剂型号
    for (i = 0; i < 3; i++) {
	// 遍历每一种剂量
        for (j = 0; j < 5; j++) {
	    // 每一种剂量都不得超过注射器型号
            if (capacity[j] <= model[i]) {
                dosage = capacity[j];
		// 遍历注射次数[10,180],并计算出单次注射量
                for (injections = 10; injections <= 180; injections += 10) {
                    single_dose = dosage / injections;
                    printf("注射器型号: %.2fml, 总剂量: %.2fml, 注射次数: %d, 单次注射剂量: %.4fml\n",
                           model[i], dosage, injections, single_dose);
                }
            }
        }
    }

    return 0;
}

