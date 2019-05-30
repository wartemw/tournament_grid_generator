#include "PairGraph.h"

PairGraph::PairGraph(Pair *pair, int x, int y) {
    if (pair->getTeamList().size() == 1)
        _teamList.push_back(new TeamGraph(pair->getTeamList()[0], x, y));
    if (pair->getTeamList().size() == 2) {
        _teamList.push_back(new TeamGraph(pair->getTeamList()[0], x, y - 8));
        _teamList.push_back(new TeamGraph(pair->getTeamList()[1], x, y + 8));
    }
}

void PairGraph::render(Windows *windows) {
    for (int i = 0; i < _teamList.size(); ++i) {
        _teamList[i]->render(windows);
    }
}