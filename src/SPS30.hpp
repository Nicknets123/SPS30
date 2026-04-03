#ifndef SPS30_HPP
#define SPS30_HPP
#pragma once

#include <cstdint>

class SPS30{
    public:
        SPS30(uint8_t adress = 0x69);

        void Start_measur();

        void Stop_measur();

        void Read_d_r_flag();

        void Read_measured_val();

        void Sleep();

        void Wake_up();

        void Clean_fan();

        void Read_write_Auto_cleaning_inter();

        void Read_prod_type();

        void Read_serial_numb();

        void Read_vers();

        void Read_status_reg();

        void Clear_status_reg();

        void Reset();

    private:
        uint16_t Start_Measurement = 0x0010;
        uint16_t Stop_Measurement = 0x0104;
        uint16_t Read_Data_Ready_Flag = 0x0202;
        uint16_t Read_Measured_Values = 0x0300;

        uint16_t Sleep = 0x1001;
        uint16_t Wake_up =  0x1103;

        uint16_t Start_Fan_Cleaning = 0x5607;
        uint16_t Read_Write_Auto_Cleaning_Interval = 0x8004;

        uint16_t Read_Product_Type = 0xD002;
        uint16_t Read_Serial_Number = 0xD033;
        uint16_t Read_Version = 0xD100;
        uint16_t Read_Device_Status_Register = 0xD206;
        uint16_t Clear_Device_Status_Register = 0xD210;

        uint16_t Reset = 0xD304;
}



#endif