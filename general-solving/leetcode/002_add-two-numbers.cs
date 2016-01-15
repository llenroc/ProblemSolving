/***************************************************************************
* Problem Name: Two Sum
* Problem URL : https://leetcode.com/problems/two-sum/
* Date        : Jan 11 2015
* Complexity  : O(n+m) Time and Space
* Author      : Atiq Rahman
* Status      : Accepted
* Notes       : A mistake was not to add following line
*                 r = r.next;
*               Inspirted by leetcode forum discussion
*               beats 67.88%
* meta        : tag-linked-list
***************************************************************************/

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode rHead=null, r=null;
        int c = 0;
        
        while (l1 != null || l2 != null || c==1) {
            int d = (l1==null?0:l1.val)+(l2==null?0:l2.val) + c;
            if (d>9) {
                c = 1;
                d -= 10;
            }
            else
                c = 0;

            if (r == null) {
                r = new ListNode(d); rHead = r;
            }
            else {
                r.next = new ListNode(d);
                r = r.next;
            }
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
        }
        return rHead;
    }
}
