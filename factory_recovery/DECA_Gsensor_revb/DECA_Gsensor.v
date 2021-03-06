
//=======================================================
//  This code is generated by Terasic System Builder
//=======================================================

module DECA_Gsensor(

	//////////// CLOCK //////////
	input 		          		ADC_CLK_10,
	input 		          		MAX10_CLK1_50,
	input 		          		MAX10_CLK2_50,

	//////////// KEY //////////
	input 		     [1:0]		KEY,

	//////////// LED //////////
	output		     [7:0]		LED,

	//////////// G-Sensor //////////
	output		          		GSENSOR_PD,
	output		          		GSENSOR_ST,

	//////////// SW //////////
	input 		     [1:0]		SW
);

//=======================================================
//  REG/WIRE declarations
//=======================================================
wire	        response_valid; 
wire  [4:0]   response_channel;
wire  [11:0]  response_data; 
wire  [11:0]  data_z ;
wire          command_valid ;
wire          command_ready ;
wire  [7:0]   led_out ;
wire  [4:0]   ch ;
wire          reset_n ; 
//=======================================================
//  Structural coding
//=======================================================
//--Gsensor IC Set-- 
assign GSENSOR_PD = 1'b0 ;
assign GSENSOR_ST = 1'b0 ;

//--RESET--
assign reset_n = KEY[0] ;

//--ADC init , ADC data out
adc_init_out adcin(  
 .adc_clk       (ADC_CLK_10),
 .reset_n       (reset_n), 
 .response_valid(response_valid),
 .response_data (response_data), 
 .command_valid (command_valid),
 .data_z        (data_z) 
) ;

//--ADC channel
assign ch=1;   //ADC2_IN1

//--ALTERA ADC Controller IP---
adc_qsys adc_qsys (
    .clk_clk                              (ADC_CLK_10),       
    .reset_reset_n                        (reset_n),                    
    .modular_adc_0_command_valid          (command_valid), 
    .modular_adc_0_command_channel        (ch[4:0] ),        
    .modular_adc_0_command_startofpacket  (),
    .modular_adc_0_command_endofpacket    (),
    .modular_adc_0_command_ready          (command_ready),
    .modular_adc_0_response_valid         (response_valid),
    .modular_adc_0_response_channel       (response_channel),
    .modular_adc_0_response_data          (response_data),
    .modular_adc_0_response_startofpacket (), 
    .modular_adc_0_response_endofpacket   ()
);

//-----LED Processor----
led_driver u_led_driver	(
    .iRSTN    (reset_n),
    .iCLK     (MAX10_CLK1_50 ),
    .iDIG     (data_z[10:1]), //ADC2IN3
    .iG_INT2  (response_valid),
    .oLED     (led_out),
    .fine_tune( 0 ));

//--LED Output--	 
assign LED = 8'hff ^ { led_out[0] , led_out[1] ,led_out[2] ,led_out[3] ,led_out[4] ,led_out[5] ,led_out[6] ,led_out[7] };

dual_boot dual_boot(
		               .clk_clk		    (MAX10_CLK1_50),       //   clk.clk
		               .reset_reset_n  (reset_n)              // reset.reset_n
			           );


endmodule
