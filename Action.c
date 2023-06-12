Action()
{
	lr_start_transaction("TRANSx2");

	lr_message("this zzzis still silly")

	lr_end_transaction("TRANSx2", LR_AUTO);
	
		return 0;

}
