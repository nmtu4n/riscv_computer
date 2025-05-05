module imem 
	#(parameter ADDR_WIDTH = 32,
	  parameter DATA_WIDTH = 32
	  )
(
  // inputs  
  input [ADDR_WIDTH-1:0]     	 addr_i,

  // outputs
  output [DATA_WIDTH-1:0] inst_o
);

    reg [DATA_WIDTH-1:0] m[31:0];
	 
    initial begin 
		  $readmemh("../src/imem.txt",m); 
	  end

    assign inst_o = m[addr_i[6:2]];

    wire _unused_ok = &{ addr_i[31:7], addr_i[1:0]};

endmodule : imem

