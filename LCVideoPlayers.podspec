#
# Be sure to run `pod lib lint LCVideoPlayers.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LCVideoPlayers'
  s.version          = '0.1.0'
  s.summary          = '视频播放器组件'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = '视频播放器组件，包括几个视频sdk'

  s.homepage         = 'https://github.com/mlcldh/'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'menglingchao' => '1228225993@qq.com' }
  s.source           = { :git => 'https://github.com/mlcldh/LCLive.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

    s.ios.deployment_target = '8.0'

#    s.prefix_header_contents = '#import "Masonry.h"','#import "UIImageView+YYWebImage.h"'

    s.source_files = 'LCVideoPlayers/Classes/**/*'

    s.vendored_libraries = 'LCVideoPlayers/Classes/ARCPlayer/libARCPlayer.a','EWTPlayer/Classes/CCSDK/libCCSDK.a'
    s.vendored_frameworks = 'LCVideoPlayers/Classes/IJKMediaplayer/*.framework'
#    s.resources = 'LCVideoPlayers/Resources/**/*'
#   s.resource_bundles = {
#     'LCVideoPlayers' => ['LCVideoPlayers/Resources/*']
#   }

  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'UIKit', 'CoreFoundation', 'QuartzCore'
#   s.static_framework  =  true
  end
