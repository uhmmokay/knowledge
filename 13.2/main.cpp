namespace Fantasy
{
    enum MonsterType {
        orgs,
        goblin,
        troll,
        ogre,
        skeleton
    };
}

int main()
{
    [[maybe_unused]] const Fantasy::MonsterType monster (Fantasy::ogre);
    return 0;
}