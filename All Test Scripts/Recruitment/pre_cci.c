# 1 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c"
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("posts.json", 
		"URL=https://darkreader.org/blog/posts.json", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"LAST");

	web_url("netcheck.gif", 
		"URL=https://ssl.gstatic.com/docs/common/netcheck.gif?zx=z10qh145mhwd", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://docs.google.com/", 
		"Snapshot=t2.inf", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=435135620&t=pageview&_s=1&dl=chrome-extension%3A%2F%2Fllbdoljkknpjgfcnbnoiehjcgancpjmd%2F_generated_background_page.html&dp=%2Fbackground&ul=en-us&de=UTF-8&sd=24-bit&sr=1536x864&vp=&je=0&_u=QACAAEABAAAAACAEI~&jid=511904000&gjid=1334274961&cid=830389759.1694837545&tid=UA-169009641-3&_gid=1307316543.1704256953&_r=1&_slc=1&z=179715934", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	 

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU", 
		"LAST");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=beta&prodversion=125.0.6422.26&lang=en-US&acceptformat=crx3,puff&x=id%3Daieoplapobidheellikiicjfpamacpfd%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x=id%3Dgfenjblodoldnbiddmggcbkcapiolbig%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1&x=id%3Dhflefjhkfeiaignkclmphmokmmbhbhik%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D14%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0eY2hJnht1WMBCgYIARAAGA4SNwF-L9Ir_QkPPq7u0dL0hbfZo6bRKjGZSgBA-176fVEMsE6uJkq0d10F8i5Dn9zr3rMhZtsA3uU&scope=https://www.googleapis.com/auth/chromesync", 
		"LAST");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:wHQ4yG-Owdstmgmo_3hISfE11tF9bgBQxyuPU822_PU&cup2hreq=7b2b751d98fa1d7ea2a44f872b0bb14f59a46d7b62839e30f1c69d60785e382a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"aapbdbdomjkkjkaonfhkkikfgjllcleb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.13\"}]},\"ping\":{\"ping_freshness\":\"{f7ac4f5d-5cd5-44b4-9ecb-3dee5ef499df}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.13\"},{\"appid\":\"cifnddnffldieaamihfkhkdgnbhfmaci\",\"cohort\":\"1::\","
		"\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7d8ec042733b39abfd728bf3969d100d7fc6fbee4369ba231e39dbfd9fa8d9df\"}]},\"ping\":{\"ping_freshness\":\"{1e5c9119-9280-4d48-85b1-cf63dff897ef}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"12.1.0.0\"},{\"appid\":\"cjpalhdlnbpafiamejdnhcphjbkeiagm\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6130,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.ed1e7286aba0beea0b01a9c7411be2a7bb1413922665570049c7b97c2c7f5e3b\"}]},\"ping\":{\"ping_freshness\":\"{4f73649f-6cf2-41de-809f-dbda8310617e}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.57.0\"},{\"appid\":\"dahfohiipmpcppjbablgfoggbogdmddp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6136,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.0.1.3\"}]},\"ping\":{\"ping_freshness\":\"{53ff8b9a-0e4a-4101-89f5-255db0f0be07}\",\"rd\":6336},"
		"\"updatecheck\":{},\"version\":\"0.1.3\"},{\"appid\":\"dhdgffkkebhmkfjojejmpbldmpobfkfo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0f931ef68b73d54c7badb15ce19ffe79a9ebb6489ecf86a808cd57b3874404d2\"}]},\"ping\":{\"ping_freshness\":\"{18f32e39-b35d-4c34-8d31-86ac8745bdae}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.1.1\"},{\"appid\":\"eimadpbcbfnmbkopoojfekhnkhdbieeh\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.32f473cfee58b6e31e3db6bc3e2b3049094b97a60219fa3f32a0c999a4472f08\"}]},\"ping\":{\"ping_freshness\":\"{fcd0dbb8-5cf3-4f3a-8b75-0b43eaf1d2a3}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.9.84\"},{\"appid\":\"ekcgkejcjdcmonfpmnljobemcbpnkamh\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.ef25c83ebbbbc60f8eba85ffaf42689bbf5f645dd49c5c0ebb2af9d0c33fd6e0\"}]},\"ping\":{\"ping_freshness\":\"{99e5dce8-a798-4242-ac94-93c16bb2c8bc}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.8.9.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\""
		":\"{8f9d894c-19ac-46fc-b217-45f250173af5}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid\":\"hnmpcagpplmpfojmgmnngilcnanddlhb\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6325,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.4.9\"}]},\"ping\":{\"ping_freshness\":\"{df450d9b-b94c-4524-bf31-8e66e7e03a49}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.4.9\"},{\"appid\":\"imielmggcccenhgncmpjlehemlinhjjo\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6197,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.4\"}]},\"ping\":{\"ping_freshness\":\"{6666bed2-9c56-4be1-97f9-112a12c92c19}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.1.4\"},{\"appid\":\"llbdoljkknpjgfcnbnoiehjcgancpjmd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0\"}]},\"ping\":{\"ping_freshness\":\""
		"{393629e2-8d14-4bb9-a995-432dd5203826}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0\"},{\"appid\":\"lpcaedmchfhocbbapmcbpinfpgnhiddi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.45e2dfda4f88df24f554a20ce6ffade416a80632d701f1a4f92864257194823b\"}]},\"ping\":{\"ping_freshness\":\"{18b80f4e-dc3e-4b92-8de0-bbfb4f122d0f}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"4.24172.540.1\"},{\"appid"
		"\":\"mnjggcdmjocbbbhaepdhchncahnbgone\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.54b6d67a7f14752720bd6432b53c85f7a4fcad246635217e59af1eb576ec95f2\"}]},\"ping\":{\"ping_freshness\":\"{65cc101f-56df-416b-8022-393165ce575b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"5.5.9\"},{\"appid\":\"mooikfkahbdckldjjndioackbalphokd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6326,\"installedby\""
		":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.3.17.2\"}]},\"ping\":{\"ping_freshness\":\"{4691264c-df32-4d0a-8084-6ea5e247992b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3.17.2\"},{\"appid\":\"ngpampappnmepgilojfohadhhmbhlaek\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.448596128b87ed519e54c697db46cbee7eb6888988bb865bdc42a1c72fb60cd9\"}]},\"ping\":{\"ping_freshness\""
		":\"{8136eb38-5b29-46c7-b4b8-3d13abbcfa73}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"6.42.8.2\"},{\"appid\":\"nmkinhboiljjkhaknpaeaicmdjhagpep\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6318,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.37.1.3.0\"}]},\"ping\":{\"ping_freshness\":\"{c0b0a30f-9d6a-4e2c-a390-a24b1f3d10d7}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"37.1.3.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1:"
		":\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{ac09939e-62fa-4f0c-9a0e-fa93cf84d936}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"ponfpcnoihfmfllpaingbgckeeldkhle\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.40f3aba7ea8f7ed363a0020f829b6ee2637e42eac2f35edbdf91743a3064a1ca\"}]},\"ping\":{\"ping_freshness\":\"{5c643f4e-78f6-433b-bbd1-ffd23d377c75}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2.0.124.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.4046\"},\"prodchannel\":\"beta\",\"prodversion\":\"125.0.6422.26\",\"protocol\":\"3.1\",\"requestid\":\"{82eb9d0d-5af3-4f3b-9463-ba25d636971a}\",\"sessionid\":\"{14c6688b-e6f9-4816-92aa-29234cd0239b}\",\"updaterchannel\":\"beta\",\"updaterversion\":\"125.0.6422.26\"}}", 
		"LAST");

	web_add_cookie("ACCOUNT_CHOOSER="
		"AFx_qI6CptrIQJ0JT_CzhF04ksMAYtsCRWk57dZclLbq33ZkqIg-U7p6iI3Xha5Cw6_BJ_rq6GFfzsnoHwfC6kneZMYxRNq-unHznpPm13YrGwP6AiVAQ9I_WEp7XbuAkVejLcU3ES51wiKK9fBIHGh7aNWR6UPOttTfEtLMb_wtZ80EHPEZMEkL2aP6kXGes64iQUOMgOisrMuW07gLdtx60HY76BT2csGxj1Q4Sk8IDi24_J7m6Kf_zTYp_dxufFRAyeLr_2e3v-Rp-x9u_xVxD1Cp9a7cI5VP0Y_J6aHF6OvzYzi75RsK3gUaOmjBZFjLwD3F9LruzD9bzYOI3kjJTuSO86AWwGlC_gPZU7B5IseawN2a7rLJ5Jv1lLqJ9IlW3PnnPseIgOIaioOIYaHn5h1V__mLD4UGhFvEo5q2pzgKENmlBogHGAzCfsk2RQxyI7bhlaK5YUsSJ6i1AF8fbdZnmx5SdqWg4faCdgbNQTsh2iWgMr"
		"ejqYRfj5t7Rds_cBSH4uC8N-T9ioMPbBvxazyj5YHyjA6VQ0dHzxic331Rml3O40QVb_Db7ZJSHbDl5Yv3-yS8QnY4XA71h3DC8Kccspr19zsH8MzPjJ9n6c9aW2R-JKSRx8EsT4Klk0WiI9Jt2vWdgiQJ6wSkPT60ORRSSV-hmzPselT9QQzriIQTv92jdAa7iGwX4VWF2hdCLs2cnswvu1QZBgg7GMxjU_HhM_uSeQ; DOMAIN=accounts.google.com");

	web_add_cookie("LSOLH=_SVI_EKbc1uLvjoQDGBAiP01BRURIZl9xbkxncUdxNy1fXy1pUUU3dDhGdURNdHh0VU1oclZmaXRIUElnblpCaGZQVktITjFFT0NPSVNLMA_:28449233:5844; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIg5sB; DOMAIN=accounts.google.com");

	web_add_cookie("OTZ=7536398_32_32__32_; DOMAIN=accounts.google.com");

	web_add_cookie("SID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpBLeF97Kej1xmbQE_JYeNBQACgYKAQsSAQASFQHGX2Mi_vt3kQZm-tlyMU0Wc_N7FxoVAUF8yKrCnJbsTZ54hIISoTIZ31-y0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpSUkam7Apr-bHwr-FYOY6PgACgYKAe4SAQASFQHGX2MiBzRmjDpHcKB92qLVdl48ohoVAUF8yKrCZFIX07AClz5zLl_tXhtm0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=g.a000jAgFXxsKmdrul76IzI_n7dWasVqRtjFq5GuH6dfmePU_fJJpVLpR0CNWhHD2mWSukkKCJgACgYKARESAQASFQHGX2MimS83sVwdgvWtaaY9UxOOtBoVAUF8yKoQJ3sRLLRpiJbrVz1fkNau0076; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=An5lCeZVvXhGYznJH; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AU-t4nhpOjgXDdf-D; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=PySt7TArtLmMAQSX/A6-fNYNKnH_tnRNJt; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=nscqmydOhuIGsQlg/AXIWx3huHmocw0KGh; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NDETrGiIb3PXOQu02KnI_BgACgYKAUwSAQASFQHGX2MigZIm5JYaqYQVrxYJup0WIRoVAUF8yKqdVoFZIM_NRFPEGS2gan3q0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NiFd6oo1KvlZxa5MqcKT-SgACgYKAewSAQASFQHGX2MilUsylXQluaQeCKWps7vbiBoVAUF8yKpzNEvKcNPc0KXgDbR_tOuy0076; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.calendar.google.com|o.chromewebstore.google.com|o.drive.fife.usercontent.google.com|o.drive.google.com|o.lens.google.com|o.mail.google.com|o.meet.google.com|o.myaccount.google.com|o.myactivity.google.com|o.photos.fife.usercontent.google.com|o.photos.google.com|o.play.google.com|o.script.google.com|o.sites.google.com|s.BD|s.blogger|s.youtube"
		":g.a000jAgFX5wmVhfhvVLme4HmfcgusA6DCGSY6wH3mKOutbSGQh4NJPFntC_8owrHNtwY-5nwaQACgYKAeUSAQASFQHGX2Mi2I4o48UVTSCGISAs-pya3BoVAUF8yKrzml4xEzzn0Mc9mqfZ7tjY0076; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AQTF6HwXEyGY5X7ly_dmVM1s_24F8a4GjCsCeOIIjW-5M6PUNxyoV56zmg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2024-05-07-03; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEBLwcBXLN0r9noFf-VU4tRTtHZOnbrU5H-va9z49YiHI3619iCoeG-TuxNAFTBplizEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEBLwcBXLN0r9noFf-VU4tRTtHZOnbrU5H-va9z49YiHI3619iCoeG-TuxNAFTBplizEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:2cMJM9u-s-kSBpo_72RzYRGLOf5sVoXg5D3g1m_W1-7sCNUKrpsux3KCoFLhNrmrrLYXB28YaujfLeWGaSnjN1k_fRXdw1fVMx4QXQiNKvGIgsZ_pUO-8dCQ_Fho3efgpRClSuBK1X5IvgksWnK00h3Y6gHxLQ:0YCvTElOnG0RfYko; DOMAIN=accounts.google.com");

	web_add_cookie("NID=514="
		"vzcSrK9LdbRF91cabyBDycjiK4C0QmHUCs4tNR3rbUn4wpKGCCiWlFojTerwXKgtcxiRBGBbiwEMLBkq7TPvS_CMaMGCiW0_RY_yQA1TakGGAmF9yEvQlWnxwvrnROLDCWiubyeYTJKqCwW5SK3BPOyUcYKSlpQ0ZPOVT3wrup9dQZWd8OwFirjVFMeWFZDvvmoaVBS9uw_IgRugrRYQ1QcwPkgz4QvnuPL0zFdMtnaCHy20rplH2ujGBSKTHKqNxi8TeGJFHEj2zXPDW7ZiHHEKb4ek8u4R6lFt5WCGwPSz8uf6Y9NsYZLUq05k38JtMSrogAGxzohtspF2ygqTfAA0HB8d0dknMwogNbjgTWC2F2_EpROWVn2pSJ0AEcjqLSDnn2m_zmQox039wlx7VSYOk4eElqwN8VkSZKZgJK6_uBShlXlKvhBG8UXnAmwLYHUKVwIyNVdk8owL9f1xxeaYifDSW7A6E3HqmjXhNRHcNJBk_LX4K8"
		"dpAElZw-H4_4JHiBTYd-raXiwZDNgYJd1J6nAQLmhU7ntLSo3kEKSoY3qW-rEdfi6k6-nMjkddiiKu8CSIfOJ3VK2vsatJVH_TKAd6oIzuG4j8_dPr0UTEDmf3et52CZwweg2ZuCB95evPMtpH31ujg8xTA5JOJE1Pl97YbsC_SfUNZktm2p4NE3L3W39DA0c1wvWPOTaUv6sqSRxOC7Zt4_-gBfKhTT4oqRLWM_M6-iZgC0SXWqwyj_Qpu7EpAUGTTYra0Xa1eh58G2qRG3cWf3-b6iqzt9-bu6FsYl9qEG-xG_lQBTetMM5rvb6BRVhemeZFFKrd3KjpbrQHzuDyqznsr_hdOgpl29sWkQ9Sj-Rb9ULyTRBULOhONl18hZRXo0aixi-9DDUrdOLwMnbVukNNuvYm8BxH0pjnUCvQ0UCJ2Yu55Ypo4VdDg9RsvJDlfi2iCP4nbnU92HDW4VbiPOJ_fowxUblo5wk6j9EDXOCkwJnGf10h"
		"3JNbz801FhhHCt-k_UAHVd9U_DQwNcwhiFsFnr5R4bOZgGhw1Jpl58xSMt-LFl-T3vbz61QbXMJWqQx7Eh3PTWAD82M-HFYzjvzipyTXR2iZmDf3Sg6CnyLMIoWhP5HKexeASHmJzNxKaqiDjTsC0VATur3Bda8i8E6vMrBJuUKjgvVvuchZU7swA_PP9P14Wb1a3e7RnDb2ESr3INgVvnHWVVv91irz4ZygGAEHix1jzWAipe27Xz0-tifnQ6lPLcYLJ7n8FPHSLuVh4T7Au3ekB5xZI51TWM9tT-LFQRL3Em3exaiXbVFu1QKIT272VLQA4QEvZlZKvJUEfD9aQXn3uaTsVRkLDuctd2DXQ_2_6OYeJGURGf5M964x8REg5Y8o; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AKEyXzXra5O-DaBWiViCnzHd46G2GL2iyOLzD_4FZfI2w3FgmI_YEfWDU-Zyv3_zCc1ZnNY7Hys; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=AKEyXzVoVSKhbVjQScZAYzGW_lBGTnMyWslTGHkR6HWye1djuCATFli39IK2I-2NwmZDk5a7XeKm; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AKEyXzWrZUalMoZsWEoBQi6jwQvIooKCAZFp_G8E7AfT9NkVknIOtlwQ_THKMRtV4ab760mMEeQ; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"Body= ", 
		"LAST");

	web_custom_request("v1:GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1:GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\\x02\\x10\\xC6\\xB2\\xE1\\xA0\\x06 \\x0F\n\n\\x08\t\\x10\\xF3\\x82\\xF5\\xB0\\x06 \\x0F\n\n\\x08\r\\x10\\xF1\\xE9\\x9C\\x9E\\x06 \\x0F\ng\\x08\\x0F\\x10\\x05 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xB1\\xED\\xBE\\xB1\\x06 \\x0F\n"
		"g\\x08\\x15 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x18\\x10\\xA3\\x86\\xC0\\xB0\\x06 \\x0F\n\n\\x08\\x19\\x10\\x83\\xF9\\x99\\xB1\\x06 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n{\\x08\\x1F\\x10\\xCF\\x85\\xAD\\xA6\\x06 \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\nm\\x08 \\x10\\xEC\\xB6\\xAA\\xFA\\x08 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nN\\x08\"\\x10\\x86\\x82\\xB3\\xA5\\x06 \\x0F2B\n"
		"<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x05en-US2\\x02\\x08\\x06", 
		"LAST");

	web_add_cookie("IDE=AHWqTUkmqF680NLEmaIjruAKeBUZP6zfamS2m3EfBqmYvC0E8mGaWqLSsGxmInmF; DOMAIN=stats.g.doubleclick.net");

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j101&tid=UA-169009641-3&cid=830389759.1694837545&jid=511904000&gjid=1334274961&_gid=1307316543.1704256953&_u=QACAAEAAAAAAACAEI~&z=1107761190", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=beta&milestone=125", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-D3DXCWV39Y&cx=c&_slc=1", "Referer=", "ENDITEM", 
		"LAST");

	return 0;
}
# 4 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

# 1 "Action.c" 1
Action()
{

	lr_think_time(5);

	web_url("ChRDaHJvbWUvMTI1LjAuNjQyMi4yNhIuCahJccAtAjXtEgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVTiF48GgYy3xFFxIZCcmLdcaTM2VsEgUNkWGVTiGfsYxrHqOMNg==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTI1LjAuNjQyMi4yNhIuCahJccAtAjXtEgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVTiF48GgYy3xFFxIZCcmLdcaTM2VsEgUNkWGVTiGfsYxrHqOMNg==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"LAST");

	web_url("ChRDaHJvbWUvMTI1LjAuNjQyMi4yNhJKCcUZWdaQKOWWEgUNa2iabhIFDTEj1CsSBQ1Pnif4EgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDQbtu_8h0_zLDJFYr3QSGQnJi3XGkzNlbBIFDZFhlU4hkO87yl8MIA0=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTI1LjAuNjQyMi4yNhJKCcUZWdaQKOWWEgUNa2iabhIFDTEj1CsSBQ1Pnif4EgUNkWGVThIFDZFhlU4SBQ2RYZVOEgUNkWGVThIFDQbtu_8h0_zLDJFYr3QSGQnJi3XGkzNlbBIFDZFhlU4hkO87yl8MIA0=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"LAST");

	lr_think_time(9);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	return 0;
}
# 5 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

 
# 16 "vuser_end.c"
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:R1yThCCJ87R9gRRUYFeynx3r-AsHQmtO-FdIOesknrA&cup2hreq=8aa7195642a2f1e7c05921263517741855c39ec672d75633d4214dcf86bd874c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6114,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f9b952fc2a9afdf6e92e2c5a7b951ed46d44f98bc4cb8bd6a19924d888862ae6\"}]},\"ping\":{\"ping_freshness\":\"{2f9acdf8-87e8-439f-85d6-5c2811197310}\",\"rd\":6336},\"updatecheck\":{},\""
		"version\":\"2024.5.6.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{08425c1d-4921-47dc-aa23-9abd7dcf2e68}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp"
		"\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{435c5f9a-4ea6-4e8c-bb59-df23328ec5cd}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{3e26fd64-8617-48a7-afc1-c76f7117bfe5}\",\"rd\":6336},\""
		"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:1y59:\",\"cohortname\":\"Beta\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{ce95310b-5d55-4d73-879c-a8492b07e621}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\""
		"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.40530dd93ad0a5f406a909a50c9aec82f6be28a61208ef052823ff0b59fd3bdd\"}]},\"ping\":{\"ping_freshness\":\"{115c10bb-818f-4b37-b630-754bdf114dd3}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"20240404.625479014.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl/2dgx/"
		"2dh3:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.632dcc2fde2bbf1e66df6c6f2d20b6ecf00463e8b53f74192011d3d54ea5a1b6\"}]},\"ping\":{\"ping_freshness\":\"{f231f99d-d3e7-44d4-a794-8cbc542b63dc}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"445\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.153e9301be7e862a33e2cab936a0a97e2f8bdf2dae1be516d6fe8a5f184ce028\"}]},\"ping\":{\"ping_freshness\":\"{a38f2703-17eb-401b-95ef-4cc236c6cba7}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2024.5.3.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{440062b6-db3f-481b-b95f-ea047db1b54c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\""
		":\"{2063c065-8053-4eb9-a97b-5e216d1b493f}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f62b0839f7a93e6b87c1eeb4cb03c71bd5e15b760d3f1c09e88fdb3853ea0ddb\"}]},\"ping\":{\"ping_freshness\":\"{a6c1f8df-b0b2-441f-816c-463d2fd9e0aa}\",\"rd\":6336},\"updatecheck\":{},\""
		"version\":\"8740\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{15ffc5fa-c808-4f89-832c-3e2c60768b2e}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{91a67b84-0ec0-42e6-aa07-236cece03395}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18qf:\",\"cohortname\":\"Auto Stage2 3d\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.d83d000bbae784acceea698f86c18287f9573e62b6756297d0bd4cdc0207c4eb"
		"\"}]},\"ping\":{\"ping_freshness\":\"{5cdddf3b-827c-4125-9e2f-bd45c7ee1c7b}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"950\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:off:\",\"cohortname\":\"beta64\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3a474719-ba8c-48f2-a865-a594b324e5bc}\",\"rd\":6336},\""
		"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a924d1d2fd7fa87c509ddc39c5837d34b589ac76d07abb7736ae7f854fc9d937\"}]},\"ping\":{\"ping_freshness\":\"{71730701-0190-4bac-867e-784a38988f8e}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3028\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{3a20a28d-136f-45ab-80b5-6024bb602572}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{54125810-e1c0-49e0-b3a4-a7be8ecff0dd}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a49bfa85-1bc9-4fba-9f96-970a8eaec618}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26y9:2dhr@0.5\",\"cohortname\":\"PreStable\",\"enabled\":true,\"installdate\":6123,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.bfc640f86c6bbee020f1fadfde564feca14debd5f30a6afdde435a960b70c910\"}]},\""
		"ping\":{\"ping_freshness\":\"{ca435420-b36e-4340-955b-21b32b614d3c}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2024.5.5.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c5859296-8b5b-47fa-a9c3-267b6bc0f843}\",\"rd\":6336},\""
		"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6101,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.97c5f0830ae68cc24d4fd1031749d061894ab4f3256f504ff066b36ce86a6a76\"}]},\"ping\":{\"ping_freshness\":\"{5f6cd509-2da5-43c1-bc62-028876a891ef}\",\"rd\":6336},\"updatecheck\":{},\"version\":\"2024.5.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\""
		"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.4046\"},\"prodchannel\":\"beta\",\"prodversion\":\"125.0.6422.26\",\"protocol\":\"3.1\",\"requestid\":\"{75c71f5e-62ba-43cd-9d03-39e88102d2e5}\",\"sessionid\":\"{512dcfc2-d282-466a-a351-40e8ff85053e}\",\"updater\":{\""
		"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"126.0.6441.0\"},\"updaterchannel\":\"beta\",\"updaterversion\":\"125.0.6422.26\"}}", 
		"LAST");

 


	 
# 129 "vuser_end.c"

 


	 
# 442 "vuser_end.c"

 


	web_stop_async("ID=Poll_0", 
		"LAST");

	return 0;
}
# 6 "c:\\users\\joy\\documents\\vugen\\scripts\\recruitment\\\\combined_Recruitment.c" 2

