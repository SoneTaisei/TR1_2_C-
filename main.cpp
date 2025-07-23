#include <iostream>
#include <string>
#include <vector>

// ����𔻒肷��֐�
std::string DetectEmotion(const std::string &text) {
    // ����Ƃ̃L�[���[�h
    std::vector<std::string> joyWords = { "������", "�y����", "�ō�", "�΂���" };
    std::vector<std::string> angryWords = { "���J��", "������", "�ӂ������", "������������" };
    std::vector<std::string> sadWords = { "�₵��", "�߂���", "��������", "�h��" };

    // �L�[���[�h���`�F�b�N�i��сj
    for(const auto &word : joyWords) {
        if(text.find(word) != std::string::npos) {
            return "��� (Joy)";
        }
    }

    // �L�[���[�h���`�F�b�N�i�{��j
    for(const auto &word : angryWords) {
        if(text.find(word) != std::string::npos) {
            return "�{�� (Anger)";
        }
    }

    // �L�[���[�h���`�F�b�N�i�߂��݁j
    for(const auto &word : sadWords) {
        if(text.find(word) != std::string::npos) {
            return "�߂��� (Sadness)";
        }
    }

    return "����Ȃ��iNeutral�j";
}

int main() {
    std::string input;

    std::cout << "�v���C���[�̓���: ";
    std::getline(std::cin, input);  // �e�L�X�g���͂��󂯎��

    // ����𔻒�
    std::string emotion = DetectEmotion(input);

    std::cout << "���o���ꂽ����: " << emotion << std::endl;

    return 0;
}
