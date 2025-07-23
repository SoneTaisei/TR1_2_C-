#include <iostream>
#include <string>
#include <vector>

// 感情を判定する関数
std::string DetectEmotion(const std::string &text) {
    // 感情ごとのキーワード
    std::vector<std::string> joyWords = { "嬉しい", "楽しい", "最高", "笑える" };
    std::vector<std::string> angryWords = { "ムカつく", "腹立つ", "ふざけるな", "おかしいだろ" };
    std::vector<std::string> sadWords = { "寂しい", "悲しい", "泣きたい", "辛い" };

    // キーワードをチェック（喜び）
    for(const auto &word : joyWords) {
        if(text.find(word) != std::string::npos) {
            return "喜び (Joy)";
        }
    }

    // キーワードをチェック（怒り）
    for(const auto &word : angryWords) {
        if(text.find(word) != std::string::npos) {
            return "怒り (Anger)";
        }
    }

    // キーワードをチェック（悲しみ）
    for(const auto &word : sadWords) {
        if(text.find(word) != std::string::npos) {
            return "悲しみ (Sadness)";
        }
    }

    return "感情なし（Neutral）";
}

int main() {
    std::string input;

    std::cout << "プレイヤーの入力: ";
    std::getline(std::cin, input);  // テキスト入力を受け取る

    // 感情を判定
    std::string emotion = DetectEmotion(input);

    std::cout << "検出された感情: " << emotion << std::endl;

    return 0;
}
