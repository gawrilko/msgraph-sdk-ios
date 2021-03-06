// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.


@class MSGraphEvent; 
#import "MSGraphMeetingMessageType.h"


#import "MSGraphMessage.h"

@interface MSGraphEventMessage : MSGraphMessage

  @property (nonatomic, setter=setMeetingMessageType:, getter=meetingMessageType) MSGraphMeetingMessageType* meetingMessageType;
    @property (nonatomic, setter=setEvent:, getter=event) MSGraphEvent* event;
  
@end
