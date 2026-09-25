#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    bool init(GJLevelObject* level, bool practice) {
        bool ret = PlayLayer::init(level, practice);

        if (practice) {
            auto audio = FMODAudioEngine::sharedEngine();
            if (!audio) return ret;

            audio->stopBackgroundMusic();
            if (level && level->m_levelAudioTrack) {
                audio->playBackgroundMusic(level->m_levelAudioTrack, true);
            }
        }
        return ret;
    }
};
