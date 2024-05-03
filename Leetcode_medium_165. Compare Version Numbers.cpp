class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i, j;

        // Create vectors to store the integer parts of version strings version1 and version2
        vector<int> version1Parts;
        vector<int> version2Parts;

        // Extract integer parts from version string version1
        for (i = 0; i < version1.size(); i++) {
            string part;
            j = i;
            while (j < version1.size() && version1[j] != '.') part += version1[j++];

            i = j;
            version1Parts.push_back(stoi(part)); // Convert the extracted string to an integer and store in vector version1Parts
        }

        // Extract integer parts from version string version2
        for (i = 0; i < version2.size(); i++) {
            string part;
            j = i;
            while (j < version2.size() && version2[j] != '.') part += version2[j++];

            i = j;
            version2Parts.push_back(stoi(part)); // Convert the extracted string to an integer and store in vector version2Parts
        }

        // Compare the corresponding integer parts of versions version1 and version2
        i = 0;
        j = 0;
        while (i < version1Parts.size() && j < version2Parts.size()) {
            if (version1Parts[i] > version2Parts[j]) return 1; // If version version1 is greater than version version2, return 1
            else if (version1Parts[i] < version2Parts[j]) return -1; // If version version1 is less than version version2, return -1
            i++;
            j++;
        }

        // Handle cases where one version string has more integer parts than the other and the remaining parts are all 0
        while (i < version1Parts.size() && version1Parts[i] == 0) i++;
        while (j < version2Parts.size() && version2Parts[j] == 0) j++;

        // Check if there are remaining non-zero integer parts in version version1
        if (i < version1Parts.size()) return 1; // If version version1 has more non-zero parts, it is greater, so return 1
        // Check if there are remaining non-zero integer parts in version version2
        if (j < version2Parts.size()) return -1; // If version version2 has more non-zero parts, it is greater, so return -1
        // Both versions are equal
        return 0;

        // This line is unreachable, as the function returns before reaching it
        return 1;
    }
};
