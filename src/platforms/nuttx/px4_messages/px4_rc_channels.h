#include <uORB/uORB.h>
#include <uORB/topics/rc_channels.h>
#include "platforms/px4_message.h"

#pragma once
namespace px4
{

class __EXPORT px4_rc_channels :
	public PX4Message<rc_channels_s>
{
public:
	px4_rc_channels() :
		PX4Message<rc_channels_s>()
	{}

	px4_rc_channels(rc_channels_s msg) :
		PX4Message<rc_channels_s>(msg)
	{}

	~px4_rc_channels() {}

	static PX4TopicHandle handle() {return ORB_ID(rc_channels);}
};

}