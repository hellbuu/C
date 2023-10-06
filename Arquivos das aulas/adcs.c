#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"


//static const adc_atten_t atten = ADC_ATTEN_DB_0; //sem atenuação (0 dB)
//static const adc_unit_t unit = ADC_UNIT_1;

//unsigned char msg1[] = "Voltage: ";
//char str1[5];

//int n_tu(int number, int count);
//void float_to_sring(float f, char r[]);

//static const char *TAG = "ADC EXAMPLE";
//#define B1_PIN_ADC ADC1_CHANNEL_6

static esp_adc_cal_characteristics_t adc1_chars; //variável que armazena o resultado de calibração 
int UV_Index = 0;

void app_main(void)
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    //configure adc
    esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_0, ADC_WIDTH_BIT_DEFAULT, 0, &adc1_chars);//efetua a calibração do ADCs
    adc1_config_width(ADC_WIDTH_BIT_DEFAULT);
    adc1_config_channel_atten(ADC1_CHANNEL_6, ADC_ATTEN_DB_0);
    uint32_t voltage;

    while(1)
    {
        
        int adc_reading = adc1_get_raw(ADC1_CHANNEL_6); //capture raw ADC value from channel 6
        voltage = esp_adc_cal_raw_to_voltage(adc_reading, &adc1_chars); //converte raw value to mV depois da calibração
        //float voltage = ((adc_reading)/4095*3.3)*1000; //convertendo adc_reading em Volts
        if (voltage<50)
        {
            UV_Index = 0;
        }
        else if (voltage<227)
        {
            UV_Index = 1;
        }
         else if (voltage<318)
        {
            UV_Index = 2;
        }
         else if (voltage<408)
        {
            UV_Index = 3;
        }
         else if (voltage<503)
        {
            UV_Index = 4;
        }
         else if (voltage<606)
        {
            UV_Index = 5;
        }
         else if (voltage<696)
        {
            UV_Index = 6;
        }
         else if (voltage<795)
        {
            UV_Index = 7;
        }
         else if (voltage<881)
        {
            UV_Index = 8;
        }
         else if (voltage<976)
        {
            UV_Index = 9;
        }
         else if (voltage<1079)
        {
            UV_Index = 10;
        }
         else if (voltage>1170)
        {
            UV_Index = 11;
        }

        printf("Raw: ");
        printf("%d\n",adc_reading);
        printf("Voltagem: ");
        printf("%ld mV \n",voltage);
        printf("Índice UV: ");
        printf("%i\n",UV_Index);
        vTaskDelay(pdMS_TO_TICKS(1000)); //delay 1000 ms (1s)
    }

}