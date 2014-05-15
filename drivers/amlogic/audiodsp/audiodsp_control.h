

#ifndef AUDIODSP_CONTROL_H
#define AUDIODSP_CONTROL_H
 

struct audiodsp_cmd 
{
int cmd;
int fmt;
int data_len;
char *data;
};



#define AUDIODSP_SET_FMT						_IOW('a',1,long)
#define AUDIODSP_START							_IOW('a',2,long)
#define AUDIODSP_STOP							_IOW('a',3,long)
#define AUDIODSP_DECODE_START						_IOW('a',4,long)
#define AUDIODSP_DECODE_STOP						_IOW('a',5,long)
#define AUDIODSP_REGISTER_FIRMWARE					_IOW('a',6,long)
#define AUDIODSP_UNREGISTER_ALLFIRMWARE					_IOW('a',7,long)


#define AUDIODSP_GET_CHANNELS_NUM					_IOR('r',1,long)
#define AUDIODSP_GET_SAMPLERATE						_IOR('r',2,long)
#define AUDIODSP_GET_BITS_PER_SAMPLE					_IOR('r',3,long)
#define AUDIODSP_GET_PTS						_IOR('r',4,long)

#define MCODEC_FMT_MPEG123 (1<<0)
#define MCODEC_FMT_AAC 	  (1<<1)
#define MCODEC_FMT_AC3 	  (1<<2)
#define MCODEC_FMT_DTS		  (1<<3)
#define MCODEC_FMT_FLAC	  (1<<4)
#define MCODEC_FMT_COOK		(1<<5)
#define MCODEC_FMT_AMR		(1<<6)
#define MCODEC_FMT_RAAC     (1<<7)
#define MCODEC_FMT_ADPCM	  (1<<8)
#define MCODEC_FMT_WMA     (1<<9)
#endif

