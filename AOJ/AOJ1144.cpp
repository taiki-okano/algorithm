#include <iostream>
#include <vector>
#include <limits>

constexpr int MAX_WH = 20;
constexpr int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

typedef std::pair<int, int> P;

int dfs(const int& x, const int& y, const int count = 1);

int W, H, sx, sy, gx, gy;
int map[MAX_WH][MAX_WH];

int main(){
	std::ios::sync_with_stdio(false);

	while(true){
		std::cin >> W >> H;
		if(W == 0 && H == 0){
			break;
		}

		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				std::cin >> map[j][i];
				if(map[j][i] == 2){
					sx = j, sy = i;
				}
				if(map[j][i] == 3){
					gx = j, gy = i;
				}
			}
		}
		std::cout << dfs(sx, sy) << '\n';
	}
	
	return 0;
}

int dfs(const int& x, const int& y, const int count){
	if(count > 10){
		return -1;
	}
	int res = std::numeric_limits<int>::max();
	for(int i = 0; i < 4; ++i){
		int nx = x + dx[i], ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= W || ny >= H || map[nx][ny] == 1){
			continue;
		}
		while(true){
			if(nx == gx && ny == gy){
				return count;
			}
			nx += dx[i], ny += dy[i];
			if(nx < 0 || ny < 0 || nx >= W || ny >= H){
				break;
			}
			if(map[nx][ny] == 1){
				map[nx][ny] = 0;
				int tmp = dfs(nx - dx[i], ny - dy[i], count + 1);
				map[nx][ny] = 1;
				if(tmp != -1){
					res = std::min(res, tmp);
				}
				break;
			}
		}
	}
	if(res > 10){
		return -1;
	}
	return res;
}
