/*
 * Enter your code here. Read input from STDIN. Print your output to STDOUT.
 * Your class should be named CandidateCode.
*/

import java.io.*;
import java.util.*;
public class CandidateCode {
    private final int[][] DIRS = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  public int trapRainWater(int[][] heights) {
    if (heights == null || heights.length == 0 || heights[0].length == 0) {
      return 0;
    }
    PriorityQueue<Cell> pq = new PriorityQueue<>();
    int numRows = heights.length;
    int numCols = heights[0].length;
    boolean[][] visited = new boolean[numRows][numCols];
    for (int i = 0; i < numRows; i++) {
      pq.offer(new Cell(i, 0, heights[i][0]));
      visited[i][0] = true;
      pq.offer(new Cell(i, numCols - 1, heights[i][numCols - 1]));
      visited[i][numCols - 1] = true;
    }
    for (int j = 1; j < numCols - 1; j++) {
      pq.add(new Cell(0, j, heights[0][j]));
      visited[0][j] = true;
      pq.offer(new Cell(numRows - 1, j, heights[numRows - 1][j]));
      visited[numRows - 1][j] = true;
    }
    int volume = 0;
    while (!pq.isEmpty()) {
      Cell now = pq.poll();
      for (int i = 0; i < 4; i++) {
        int nx = now.x + DIRS[i][0];
        int ny = now.y + DIRS[i][1];
        if (nx >= 0 && nx < numRows && ny >= 0 && ny < numCols && !visited[nx][ny]) {
          visited[nx][ny] = true;
          pq.offer(new Cell(nx, ny, Math.max(now.h, heights[nx][ny])));
          volume += (heights[nx][ny] < now.h) ? now.h - heights[nx][ny] : 0;
        }
      }
    }
    return volume;
  }

  class Cell implements Comparable<Cell> {
    int x;
    int y;
    int h;

    public Cell(int x, int y, int h) {
      this.x = x;
      this.y = y;
      this.h = h;
    }

    @Override
    public int compareTo(Cell that) {
      if (this.h < that.h) {
        return -1;
      } else if (this.h > that.h) {
        return 1;
      } else {
        return 0;
      }
    }
  }
    public static void main(String args[] ) throws Exception {

    	//Write code here
    	int n,m,i,j,result;


    	Scanner sc = new Scanner(System.in);

    	n = sc.nextInt();
    	m = sc.nextInt();

    	int[][] heights = new int[n][m];

    	CandidateCode c1 = new CandidateCode();

    	for(i=0;i<n;i++)
    	{
    	    for(j=0;j<m;j++)
    	    heights[i][j] = sc.nextInt();
    	}

    	result = c1.trapRainWater(heights);

    	System.out.println(result);

   }
}
