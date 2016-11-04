//
//  ViewController.h
//  Recorder
//
//  Created by Mahin Nur Islam on 11/4/16.
//  Copyright © 2016 Mahin Nur Islam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController <AVAudioRecorderDelegate, AVAudioPlayerDelegate>
@property (weak, nonatomic) IBOutlet UIButton *recordPauseButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
@property (weak, nonatomic) IBOutlet UIButton *stopButton;

- (IBAction)recordPause:(id)sender;
- (IBAction)stop:(id)sender;
- (IBAction)play:(id)sender;

@end

