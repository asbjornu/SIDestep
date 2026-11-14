# SIDestep

A VSTi that emulates a SID chip (using reSID) and then, when you are done composing, it can capture and export your song for use on a real C64 in games and demos.

SIDestep is a fork of [SIDStep2](https://github.com/deathybrs/SIDStep2), originally created by **deathy** ([@deathybrs](https://github.com/deathybrs)). All credit for the original concept, design, code, and documentation belongs to them. SIDStep2 is licensed under the [GPLv3](LICENSE), which is what makes this fork possible.

## Why a fork?

SIDStep2's author became inactive and unresponsive. There have been no upstream commits since July 2022, and recent issues and pull requests (including the fixes that made this fork possible) have gone unanswered. With no way to get changes merged upstream, forking was the only practical way to keep the plugin usable on current systems.

SIDestep aims to preserve the original workflow while continuing maintenance: keeping the plugin buildable with current toolchains, fixing bugs, and adding improvements that could no longer land upstream. The original project remains the source of the design and the vast majority of the code.

On first run, SIDestep imports the patch bank from an existing SIDStep2 installation, so saved presets carry over.

## Download

Download the latest SIDestep build from the [Releases page](https://github.com/asbjornu/SIDestep/releases).

The final upstream SIDStep2 release is still available [here](https://github.com/deathybrs/SIDStep2/releases/tag/2022.07.28.02.32).

## Community

The original [Discord server](https://discord.gg/FRJTuCbWeD) is still around.

## License

SIDestep is distributed under the GNU General Public License v3. See [LICENSE](LICENSE).
